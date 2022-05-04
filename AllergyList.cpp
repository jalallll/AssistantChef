#include "AllergyList.h"

using namespace std;

AllergyList::AllergyList(){}

AllergyList::~AllergyList(){}


int AllergyList::getAllergy(string allergy){
    vector<string>::iterator it;
    it = find(allergyList.begin(), allergyList.end(), allergy);
 
    if (it != allergyList.end())
    {
        int index = it - allergyList.begin();
        return index;
    }
    return -1;
    
}

void AllergyList::addAllergy(string allergy){
    allergyList.push_back(allergy);

}

void AllergyList::removeAllergy(string allergy){
    if (getAllergy(allergy) != -1)
    {
        allergyList.erase(remove(allergyList.begin(), allergyList.end(), allergy), allergyList.end());
    }
}


vector<string> AllergyList::getAllergy(){
    return allergyList;
}