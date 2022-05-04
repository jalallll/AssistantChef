#ifndef DIETLIST_H
#define DIETLIST_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class DietList{
    private:
        std::vector<std::string> dietList;

    public:
        explicit DietList();
        ~DietList();
        void addDiet(std::string);
        void removeDiet(std::string);
        std::vector<std::string> getDiet();
                int getDiet(std::string);

};



#endif