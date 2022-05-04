/*
Authors: 
- Jalal

Description of file contents: Create an object of type RecipeList, containing a vector of strings that stores the recipes of the user. 
                         
Date: 11/10/2021
*/
#include "RecipeList.h"

using namespace std;

/*
Function name: RecipeList

Description: Constructor
                              
Parameter descriptions: NA

Return description: NA
*/
RecipeList::RecipeList() {}

/*
Function name: ~RecipeList

Description: Destructor
                              
Parameter descriptions: NA

Return description: NA
*/
RecipeList::~RecipeList() {}

/*
Function name: findRecipeByIndex

Description: Return content in vector corresponding to specific index 
                              
Parameter descriptions: int position (index of vector)

Return description: return content of vector in specific index
*/
Recipe RecipeList::findRecipeByIndex(int position)
{
    if (position < recipeList.size()) 
    {
        return recipeList.at(position);
    }
    return recipeList.back();
}

/*
Function name: addRecipe

Description: Add Recipe object to recipeList vector 
                              
Parameter descriptions: An object of type Recipe

Return description: void 
*/
void RecipeList::addRecipe(Recipe recipe)
{
    recipeList.push_back(recipe);
}

/*
Function name: removeRecipe

Description: Given an index, remove the Recipe object from recipeList vector in that index.
                              
Parameter descriptions: The index of the recipeList vector, from which the corresponding Recipe object should be removed

Return description: void 
*/
void RecipeList::removeRecipe(int position)
{
    if (recipeList.size() == 1)
    {
        recipeList.erase(recipeList.begin());
    }
    else if (recipeList.size() > 1)
        recipeList.erase(recipeList.begin() + position - 1);
}

/*
Function name: removeRecipe

Description: Return number of Recipe objects in recipeList vector 
                              
Parameter descriptions: NA

Return description: Return size of recipeList vector, return type int 
*/
int RecipeList::getSize()
{
    return recipeList.size();
}