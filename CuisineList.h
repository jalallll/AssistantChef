#ifndef CUISINELIST_H
#define CUISINELIST_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class CuisineList{
    private:
        std::vector<std::string> cuisineList;

    public:
        explicit CuisineList();
        ~CuisineList();
        void addCuisine(std::string);
        void removeCuisine(std::string);
        std::vector<std::string> getCuisine();
                int getCuisine(std::string);

};



#endif