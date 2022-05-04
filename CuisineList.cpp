/*
Author: Jalal Qureshi 

Description of file contents: Create an object of type CuisineList, containing a vector of strings that stores the cuisine preferances of the user. 
                         
Date: 11/20/2021
*/

#include "CuisineList.h"

using namespace std;

/*
Function name: CuisineList

Description: Constructor
                              
Parameter descriptions: NA

Return description: NA
*/
CuisineList::CuisineList(){}

/*
Function name: ~CuisineList

Description: Constructor
                              
Parameter descriptions: NA

Return description: NA
*/
CuisineList::~CuisineList(){}

/*
Function name: getCuisine

Description: Traverse the vector (containing cuisines of type string) to locate the index where the parameter input is stored. 
                              
Parameter descriptions: string Cuisine

Return description: 
    - Return the index of the vector in which the cuisine (string) is stored.
    - If the cuisine (string) is not in the vector, return -1
Return Type: int
*/
int CuisineList::getCuisine(string cuisine){
    // Initialize Iterator for vector
    vector<string>::iterator it;
    // Traverse the indices of the vector to find the index containing the target string (cuisine)
    it = find(cuisineList.begin(), cuisineList.end(), cuisine);
 
    // If the target string (cuisine) is in the vector then determine the index and return it
    if (it != cuisineList.end())
    {
        // Get the index of the target string (cuisine)
        int index = it - cuisineList.begin();
        return index;
    }
    // return -1 if the target string (cuisine) not in the vector 
    return -1;

}

void CuisineList::addCuisine(string cuisine){
    cuisineList.push_back(cuisine);

}

void CuisineList::removeCuisine(string cuisine){
    if (getCuisine(cuisine) != -1)
    {
        cuisineList.erase(remove(cuisineList.begin(), cuisineList.end(), cuisine), cuisineList.end());
    }
}


vector<string> CuisineList::getCuisine(){
    return cuisineList;
}