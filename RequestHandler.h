#ifndef REQUESTHANDLER_H
#define REQUESTHANDLER_H

#include <curl/curl.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>
#include <string>


#include "FoodList.h"
#include "RecipeList.h"


class RequestHandler
{
private:
    std::string apikey;

public:
    RequestHandler(std::string);

    ~RequestHandler();

    RecipeList getRecipesFromAPI(FoodList);

    std::string getRecipeDetails(std::string);
};

#endif