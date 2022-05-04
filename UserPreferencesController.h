#ifndef USERPREFERENCESCONTROLLER_H
#define USERPREFERENCESCONTROLLER_H


#include "Account.h"
#include "FitnessPreferences.h"
#include "AllergyList.h"
#include "DietList.h"
#include "CuisineList.h"

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <unistd.h>
#include <sstream>

class UserPreferencesController
{
private:
    std::string username;
    

public:
    explicit UserPreferencesController();
    ~UserPreferencesController();
    void setUserName(std::string);
    void setFitnessPreferences(FitnessPreferences);
    void setAllergyList(AllergyList);
    void setDietList(DietList);
    void setCuisineList(CuisineList);

    FitnessPreferences getFitnessPreferences();
    AllergyList getAllergyList();
    DietList getDietList();
    CuisineList getCuisineList();

};

#endif