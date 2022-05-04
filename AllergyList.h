#ifndef ALLERGYLIST_H
#define ALLERGYLIST_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


class AllergyList{
    private:
        std::vector<std::string> allergyList;

    public:
        explicit AllergyList();
        ~AllergyList();
        void addAllergy(std::string);
        void removeAllergy(std::string);
        std::vector<std::string> getAllergy();
                int getAllergy(std::string);

};



#endif