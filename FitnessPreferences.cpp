#include "FitnessPreferences.h"

using namespace std;

FitnessPreferences::~FitnessPreferences()
{
    calorie = 0;
    protein = 0;
    carb = 0;
    fat = 0;
}

FitnessPreferences::FitnessPreferences()
{

}

void FitnessPreferences::setCalorie(int newCalorie){
    calorie = newCalorie;
}
void FitnessPreferences::setProtein(int newProtein){
    protein = newProtein;
}
void FitnessPreferences::setCarb(int newCarb){
    carb = newCarb;
}
void FitnessPreferences::setFat(int newFat){
    fat = newFat;
}
int FitnessPreferences::getCalorie(){
    return calorie;
}
int FitnessPreferences::getProtein(){
    return protein;
}
int FitnessPreferences::getCarb(){
    return carb;
}
int FitnessPreferences::getFat(){
    return fat;
}