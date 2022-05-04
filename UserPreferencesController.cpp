/*
Author: Jalal Qureshi

Description of file contents: 
    This file takes as input:
      i) Username (String)
     ii) Objects of the following types: 
        - FitnessPreferences 
        - AllergyList  
        - CuisineList  
        - DietList 
    This file outputs 4 text files, for each username, each corresponding to one of the inputted objects.
                         
Date: 11/20/2021
*/

#include "UserPreferencesController.h"

using namespace std;

/*
Function name: UserPreferencesController

Description: Constructor to initialize username to empty string
                              
Parameter descriptions: NA

Return description: NA
*/

UserPreferencesController::UserPreferencesController(){
    // initialize username to empty string
    username = "";
}

/*
Function name: ~UserPreferencesController

Description: Destructor
                              
Parameter descriptions: NA

Return description: NA
*/
UserPreferencesController::~UserPreferencesController(){}


/*
Function name: setUserName

Description: Setter method to set username to parameter input
                              
Parameter descriptions: string newUserName

Return description: Void
*/
void UserPreferencesController::setUserName(string newUserName){
    username = newUserName;
}

/*
Function name: setFitnessPreferences

Description: 
    - Uses FitnessPreferences object from parameter and username to write text file 
      containing macro nutrient goals (Calories, protein, carbohydrate, fat) corresponding to specific username.

Output: 
    - A text file, with contents separated by a colon and newline, named in the following format: 
        username_fitness.txt
    - Where username is the username of the logged in user
                              
Parameter descriptions: Object of type FitnessPreferences 
    - An object of type FitnessPreferences

Return description: Void
*/
void UserPreferencesController::setFitnessPreferences(FitnessPreferences fp){
    // Set the filename
    string filename = username + "_fitness";
    // Set file stream for i/o
    fstream f;
    // Open the file with the specific file name
    f.open(filename.c_str());

    // Initialize variables based off the FitnessPreferences object (from parameter)
    int cal = fp.getCalorie();
    int carb = fp.getCarb();
    int fat = fp.getFat();
    int protein = fp.getProtein();
    
    // Check if the file was successfully opened
    if(f.is_open()){
        // If file opened, write contents from FitnessPreferences object to file
        f<<cal<<":\n"<<protein<<":\n"<<fat<<":\n"<<carb<<":";
    }
    // If the file does not exist, create a file with the specific file name and populate the contents
    else{
        // Output file stream
        ofstream f;
        // Create a file with specific file name 
        f.open(filename.c_str());
        // Output data from FitnessPreferences object (from parameter) into file
        f<<cal<<":\n"<<protein<<":\n"<<fat<<":\n"<<carb<<":";
    }
    // close file stream
    f.close();
}

/*
Function name: setAllergyList

Description: 
    - Uses AllergyList object from parameter and username to write text file containing allergens of specific user.

Output: 
    - A text file containing the allergens, corresponding to specific username.
    - A comma separated text file named in the following format: 
        username_allergy.txt
    - Where username is the username of the logged in user
                              
Parameter descriptions: Object of type AllergyList 

Return description: Void
*/
void UserPreferencesController::setAllergyList(AllergyList allergy_list){
    // Get vector of strings, containing allergens
    vector<string> vec = allergy_list.getAllergy();
    // Obtain file name: Concatenate username with corresponding file type
    string filename = username + "_allergy";
    // Initialize output file stream
    ofstream f;
    // Create file with specific file name
    f.open(filename.c_str());
    // if file opens
    if(f.is_open()){
        // Loop through contents of vector (vector containing allergens)
        for (int i=0; i<vec.size(); i++){
        // Get content of vector in current index and save to string
        string allergy = vec.at(i);
            // If content of vector in current index is not an empty string then write to file
            if(allergy!=""){
                //write to file
                f<<allergy<<",";
            }
        }
    }
    f.close(); // close file stream
}

/*
Function name: setDietList

Description: 
    - Uses DietList object from parameter and username to write text file containing dietary preferences of specific user.

Output: 
    - A comma separated text file containing the dietary preferences, corresponding to specific username.
    - A text file named in the following format: 
        username_diet.txt
    - Where username is the username of the logged in user
                              
Parameter descriptions: Object of type DietList 

Return description: Void
*/
void UserPreferencesController::setDietList(DietList diet_list){
    // Get vector of strings, containing dietary preferences
    vector<string> vec = diet_list.getDiet();
    // Obtain file name: Concatenate username with corresponding file type
    string filename = username + "_diet";
    // Initialize output file stream
    ofstream f;
    // Create file with specific file name
    f.open(filename.c_str());
    // if file opens
    if(f.is_open()){
        // Loop through contents of vector (vector containing dietary preferences)
        for (int i=0; i<vec.size(); i++){
            // Get content of vector in current index and save to string
            string diet = vec.at(i);
            // If content of vector in current index is not an empty string then write to file
            if(diet!=""){
                //write to file
                f<<diet<<",";
            }
        }
    }
    f.close(); //close file stream
}

/*
Function name: setCuisineList

Description: 
    - Uses CuisineList object from parameter and username to write text file containing cuisine preferences of specific user.

Output: 
    - A comma separated text file containing the cuisine preferences, corresponding to specific username.
    - A text file named in the following format: 
        username_cuisine.txt
    - Where username is the username of the logged in user
                              
Parameter descriptions: Object of type CuisineList 

Return description: Void
*/
void UserPreferencesController::setCuisineList(CuisineList cuisine_list){
    // Get vector of strings, containing cuisine preferences
    vector<string> vec = cuisine_list.getCuisine();
    // Obtain file name: Concatenate username with corresponding file type
    string filename = username + "_cuisine";
    // Initialize output file stream
    ofstream f;
    // Create file with specific file name
    f.open(filename.c_str());
    // if file opens
    if(f.is_open()){
        // Loop through contents of vector (vector containing cuisine preferences)
        for (int i=0; i<vec.size(); i++){
        // Get content of vector in current index and save to string
        string cuisine = vec.at(i);
            // If content of vector in current index is not an empty string then write to file
            if(cuisine!=""){
                //write to file
                f<<cuisine<<",";
            }
    }
    }
    f.close(); //close file stream
}


/*
Function name: getFitnessPreferences

Description: 
    i) Parse file containing fitness preferences, corresponding to username 
     - File name: username_fitness.txt
    ii) Parse calories, protein, carbohydrate, fat goals from .txt file and save as variables.
    iii) Create object of type FitnessPreferences from saved values of calories, protein, carbohydrates, fat that were extracted from file
    iv) Return the object of type FitnessPreferences

Output: 
    - An object of type FitnessPreferences
    
                              
Parameter descriptions: NA

Return description: FitnessPreferences
*/
FitnessPreferences UserPreferencesController::getFitnessPreferences(){
    // The name of file that should be parsed
    string filename = username + "_fitness";
    // Initialize object of type FitnessPreferences
    FitnessPreferences fp;
    // Initialize i/o file stream
    ifstream f;
    // Open file of specific user that contains the fitness preferences
    f.open(filename.c_str());
    // Initialize string stream object
    stringstream ss;

    // If the file opens
    if(f.is_open()){
        // Initialize a string to store each line that will be parsed
        string line;
        // Initialize temporary variables to store the 5 macro nutrients that will be parsed from file
        int cal;
        int carb;
        int fat;
        int protein;
        // Initialize a counter to count the current line of the file
        int i=0;
        // Read each line from the file stream and save into the string variable "line"
        while(getline(f,line)){
            // Increment the line counter
            i++;
            // Save the string that comes before the colon delimeter
            string token = line.substr(0, line.find(":"));
            // Erase newline character
            token.erase(remove(token.begin(), token.end(), '\n'), token.end());
            // If reading first line, the token read corresponds to calorie intake
            if(i==1){
                cal = stoi(token); // stoi function used to convert int to string
            }
            // If reading second line, the token read corresponds to protein intake
            else if(i==2){
                protein= stoi(token); // stoi function used to convert int to string
            }
            // If reading first line, the token read corresponds to fat intake
            else if(i==3){
                fat= stoi(token); // stoi function used to convert int to string
            }
            // If reading first line, the token read corresponds to carb intake
            else if (i==4){
                carb= stoi(token); // stoi function used to convert int to string
            }
        }
        // Load parsed data into FitnessPreferences object
        fp.setCalorie(cal);
        fp.setCarb(carb);
        fp.setFat(fat);
        fp.setProtein(protein);
    }
    // If file can't open set all values in FitnessPreferences object to 0
    else {
        cout << "FILE DNE" ;
        // create new file and set everything to 0
        fp.setCalorie(0);
        fp.setCarb(0);
        fp.setFat(0);
        fp.setProtein(0);
        setFitnessPreferences(fp);
    }
    // close file stream 
    f.close();
    // return FitnessPreferences object
    return fp;
}
/*
Function name: getAllergyList

Description: 
    i) Parse comma separated file containing allergies
     - File name: username_allergy.txt
    ii) Parse each string up to delimeter (,) and add into AllergyList object.
    iiii) Return the object of type AllergyList

Output: 
    - An object of type AllergyList

Parameter descriptions: NA

Return description: AllergyList
*/
AllergyList UserPreferencesController::getAllergyList(){
    // The name of file that should be parsed
    string filename = username + "_allergy";
    // Initialize input file stream
    ifstream f;
    // Open file containing allergies, corresponding to username 
    f.open(filename.c_str());
    // Initialize AllergyList object
    AllergyList allergy;
    // If file opens
    if(f.is_open()){
        // Variable of type String to store each parsed line
        string line;
        // Count which line of text file is being parsed 
        int i=0;
        // Read each line from the file stream and save into the string variable "line"
        while(getline(f,line)){
            // Increment line counter 
            i++;
            // Get allergy by reading string up to delimeter
            string token = line.substr(0, line.find(","));
            // Add allergy to Allergylist object 
            allergy.addAllergy(token);
        }
    }
    // If file does not exist 
    else{
        cout << "FILE DNE" ;
    }
    f.close(); // close file stream

    return allergy; // return AllergyList object 
}

/*
Function name: getDietList

Description: 
    i) Parse comma separated file containing dietary preferences
     - File name: username_diet.txt
    ii) Parse each string up to delimeter (,) and add into DietList object.
    iiii) Return the object of type DietList

Output: 
    - An object of type DietList

Parameter descriptions: NA

Return description: DietList
*/
DietList UserPreferencesController::getDietList(){
    // The name of file that should be parsed
    string filename = username + "_diet";
    // Initialize input file stream
    ifstream f;
    // Open file containing allergies, corresponding to username 
    f.open(filename.c_str());
    // Initialize object of type DietList
    DietList diet;

    // If file opens
    if(f.is_open()){
        // Variable of type String to store each parsed line
        string line;
        // Count which line of text file is being parsed 
        int i=0;
        // Read each line from the file stream and save into the string variable "line"
        while(getline(f,line)){
            // increment line counter
            i++;
            // Get dietary preference by reading string up to delimeter
            string token = line.substr(0, line.find(","));
            // Add dietary preference to DietaryList object 
            diet.addDiet(token);
        }
    }
    // If file does not exist 
    else{
        cout << "FILE DNE" ;
    }
    f.close(); //close file stream

    return diet; //return DietaryList object 
}

/*
Function name: getCuisineList

Description: 
    i) Parse comma separated file containing cuisine preferences
     - File name: username_cuisine.txt
    ii) Parse each string up to delimeter (,) and add into CuisineList object.
    iiii) Return the object of type CuisineList

Output: 
    - An object of type CuisineList

Parameter descriptions: NA

Return description: Cuisine
*/
CuisineList UserPreferencesController::getCuisineList(){
    // The name of file that should be parsed
    string filename = username + "_cuisine";
    // Initialize input file stream
    ifstream f;
    // Open file containing allergies, corresponding to username 
    f.open(filename.c_str());
    // Initialize object of type CuisineList
    CuisineList cuisine;
    // If file opens
    if(f.is_open()){
        // Variable of type String to store each parsed line
        string line;
        // Count which line of text file is being parsed 
        int i=0;
        // Read each line from the file stream and save into the string variable "line"
        while(getline(f,line)){
            // increment line counter
            i++;
            // Get cuisine preference by reading string up to delimeter
            string token = line.substr(0, line.find(","));
            // Add cuisine preference to DietaryList object 
            cuisine.addCuisine(token);
        }
    }
    else{
        cout << "FILE DNE" ;
    }
    f.close(); //close file stream

    return cuisine; //return CuisineList object 
}