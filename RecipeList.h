#ifndef RECIPELIST_H
#define RECIPELIST_H

#include <iostream>
#include <string>
#include <vector>
#include "Recipe.h"
class RecipeList
{
private:
    std::vector<Recipe> recipeList;
    int findRecipe(std::string);

public:
    explicit RecipeList();
    ~RecipeList();
    void addRecipe(Recipe);
    void removeRecipe(int);
    int getSize();
    std::vector<Recipe> getRecipeList;
    Recipe findRecipeByIndex(int);
};

#endif