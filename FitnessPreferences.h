#ifndef FITNESSPREFERENCES_H
#define FITNESSPREFERENCES_H

#include <iostream>
#include <string>
#include <vector>

class FitnessPreferences{
    private:
        int calorie;
        int protein;
        int carb;
        int fat;

    public:
        explicit FitnessPreferences();
        ~FitnessPreferences();
        void setCalorie(int);
        void setProtein(int);
        void setCarb(int);
        void setFat(int);
        int getCalorie();
        int getProtein();
        int getCarb();
        int getFat();


};


#endif