#ifndef FOODLIST_H
#define FOODLIST_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class FoodList
{
private:
    std::vector<std::string> foodList;
    int findFood(std::string);

public:
    FoodList();
    ~FoodList();
    void addFood(std::string);
    void removeFood(std::string);
    int getSize();
    std::string findFoodByIndex(int);
};

#endif