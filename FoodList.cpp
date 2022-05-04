#include <algorithm>

#include "FoodList.h"

using namespace std;

FoodList::FoodList()
{
}

FoodList::~FoodList() {}

void FoodList::addFood(string foodName)
{
    foodList.push_back(foodName);
}

void FoodList::removeFood(string foodName)
{
    if (findFood(foodName) != -1)
    {
        foodList.erase(remove(foodList.begin(), foodList.end(), foodName), foodList.end());
    }
}

string FoodList::findFoodByIndex(int position)
{
    return foodList.at(position);
}

int FoodList::getSize()
{
    return foodList.size();
}

int FoodList::findFood(string foodName)
{
    vector<string>::iterator it;
    it = find(foodList.begin(), foodList.end(), foodName);
    if (it != foodList.end())
    {
        int index = it - foodList.begin();
        return index;
    }
    return -1;
}