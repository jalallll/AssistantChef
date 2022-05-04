/*
Author: Jalal Qureshi 

Description of file contents: Create an object of type CuisineList, containing a vector of strings that stores the cuisine preferances of the user. 
                         
Date: 11/20/2021
*/

#include "Recipe.h"

using namespace std;

/*
Function name: Recipe

Description: Constructor that initializes the recipe name and recipe id of a Recipe object 
                              
Parameter descriptions: 
    string name: Name of Recipe
    string id: Id of recipe

Return description: NA
*/
Recipe::Recipe(string name, string id)
{
    recipeName = name;
    recipeID = id;
}

/*
Function name: ~Recipe

Description: Destructor 
                              
Parameter descriptions: NA

Return description: NA
*/
Recipe::~Recipe()
{
}

/*
Function name: getRecipeName

Description: Return recipe name of the Recipe object  
                              
Parameter descriptions: NA

Return description: string recipeName (name of Recipe object)
*/
string Recipe::getRecipeName()
{
    return recipeName;
}

/*
Function name: getRecipeID

Description: Return recipe id of the Recipe object  
                              
Parameter descriptions: NA

Return description: string recipeID (id of Recipe object)
*/
string Recipe::getRecipeID()
{
    return recipeID;
}
