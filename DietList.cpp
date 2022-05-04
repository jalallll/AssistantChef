#include "DietList.h"

using namespace std;

DietList::DietList(){}

DietList::~DietList(){}


int DietList::getDiet(string diet){
    vector<string>::iterator it;
    it = find(dietList.begin(), dietList.end(), diet);
 
    if (it != dietList.end())
    {
        int index = it - dietList.begin();
        return index;
    }

    return -1;
}

void DietList::addDiet(string diet){
    dietList.push_back(diet);

}

void DietList::removeDiet(string diet){
    if (getDiet(diet) != -1)
    {
        dietList.erase(remove(dietList.begin(), dietList.end(), diet), dietList.end());
    }
}


vector<string> DietList::getDiet(){
    return dietList;
}