/*
Authors: 
- Henry Ho

Description of file contents: This file handles HTTP requests to the Spoonacular 3rd party API
                         
Date: 11/10/2021
*/

#include "RequestHandler.h"

using namespace std;
using json = nlohmann::json;
/*
Function name: WriteCallback

Description: Call-back function called when an HTTP response is received from server
                              
Parameter descriptions: void *contents, size_t size, size_t nmemb, void *userp

Return description: NA
*/
//https://gist.github.com/alghanmi/c5d7b761b2c9ab199157
static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string *)userp)->append((char *)contents, size * nmemb);
    return size * nmemb;
}

RequestHandler::RequestHandler(string key)
{
    apikey = "apiKey=" + key;

    string readBuffer;
}

RequestHandler::~RequestHandler()
{
}

RecipeList RequestHandler::getRecipesFromAPI(FoodList listOfFoods)
{
    //The string to store the data in
    string readBuffer;
    CURL *handler = curl_easy_init();

    string concatenatedFood;

    for (int i = 0; i < listOfFoods.getSize(); i++)
    {
        concatenatedFood = concatenatedFood + listOfFoods.findFoodByIndex(i) + ",";
    }
    // Create endpoint link
    string queryLink = "https://api.spoonacular.com/recipes/findByIngredients?ingredients=" + concatenatedFood + "&number=5&" + apikey;

    if (handler)
    {
        // Handle request
        curl_easy_setopt(handler, CURLOPT_URL, queryLink.c_str());

        // Write info to the readbuffer string
        curl_easy_setopt(handler, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(handler, CURLOPT_WRITEDATA, &readBuffer);

        // Perform query
        curl_easy_perform(handler);
    }

    json j = json::parse(readBuffer);

    RecipeList recipeList;

    // Creates recipes for the responses and adds them to a recipe list
    for (int i = 0; i < j.size(); i++)
    {
        Recipe recipe(j[i]["title"], to_string(j[i]["id"]));
        recipeList.addRecipe(recipe);
    }

    for (int i = 0; i < recipeList.getSize(); i++)
    {
        cout << i + 1 << ": " << recipeList.findRecipeByIndex(i).getRecipeName() << " and id: " << recipeList.findRecipeByIndex(i).getRecipeID() << "\n";
    }
    return recipeList;
}

string RequestHandler::getRecipeDetails(string idOfRecipe)
{
    //The string to store the data in
    string readBuffer;
    CURL *handler = curl_easy_init();

    // Create endpoint link
    string queryLink = "https://api.spoonacular.com/recipes/" + idOfRecipe + "/information?" + apikey;
    
    if (handler)
    {
        // Handle request
        curl_easy_setopt(handler, CURLOPT_URL, queryLink.c_str());

        // Write info to the readbuffer string
        curl_easy_setopt(handler, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(handler, CURLOPT_WRITEDATA, &readBuffer);

        // Perform query
        curl_easy_perform(handler);
    }

    json j = json::parse(readBuffer);

    string concatenatedFood;

    // Creates full list of ingredients for the recipe
    for (int i = 0; i < j["extendedIngredients"].size(); i++)
    {
        string ingredient = j["extendedIngredients"][i]["name"];
        concatenatedFood = concatenatedFood + to_string(i + 1) + "."  + ingredient + "\n";
    }

    return concatenatedFood;
}