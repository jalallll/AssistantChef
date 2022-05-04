#ifndef RECIPE_H
#define RECIPE_H

#include <string>
#include <stdlib.h>

class Recipe
{
private:
    std::string recipeName;
    std::string recipeID;

public:
    explicit Recipe(std::string, std::string);
    ~Recipe();
    std::string getRecipeName();
    void setRecipeName(std::string);
    std::string getRecipeID();
    void setRecipeID(std::string);
};

#endif