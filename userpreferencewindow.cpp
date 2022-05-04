/*
Authors: 
- Gina Choi
- Jalal Qureshi

Description of file contents: This file displays a QWindow containing the UserPreferences
                         
Date: 11/20/2021
*/

// Include header file
#include "userpreferencewindow.h"

/*
Function name: UserPreferenceWindow

Description: Constructor to initialize UserPreferenceWindow
             - Initialize instance variables.
                              
Parameter descriptions: QWidget *parent

Return description: NA
*/
UserPreferenceWindow::UserPreferenceWindow(QWidget *parent)
    :QWidget(parent), username("")
{   
    
    // Initialize the save button, to save user preferences
    saveButton = new QPushButton(tr("Save"));

    // Display buttons
    saveButton->show();

    // Connect event to slot
    // If saveButton (pushButton) is clicked, activate function(slot) savePreferences
    connect(saveButton, &QPushButton::clicked, this, &UserPreferenceWindow::savePreference);

    // Create layout for widgets
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(createAllergiesGroup(), 0, 0);
    layout->addWidget(createCuisineGroup(), 0, 1);
    layout->addWidget(createDietGroup(), 1, 0);
    layout->addWidget(createFitnessgoalGroup(), 1, 1);
    layout->addWidget(saveButton, 2,0);
    layout->setSizeConstraint(QLayout::SetFixedSize);
    // Set layout
    setLayout(layout);

    // Set title of Window
    setWindowTitle(tr("User Preference"));
}

/*
Function name: setUserName

Description: Initialize username
                              
Parameter descriptions: string newUserName

Return description: void
*/
void UserPreferenceWindow::setUserName(std::string newUserName){
    username=newUserName;
}

/*
Function name: getUserName

Description: Return username 
                              
Parameter descriptions: NA

Return description: string
*/
std::string UserPreferenceWindow::getUserName(){
    return username;
}

/*
Function name: createAllergiesGroup

Description: Create a group box containing checkboxes corresponding to potential dietary allergies
                              
Parameter descriptions: NA

Return description: QGroupBox
*/
QGroupBox *UserPreferenceWindow::createAllergiesGroup()
{
    // Initialize new QGroupBox
    QGroupBox *groupBox = new QGroupBox(tr("Allergies"));
    groupBox->setFlat(true);

    // Initialize 3 QCheckBox objects to store a potential dietary allergy
    wheatAllergyCheckBox = new QCheckBox(tr("&Wheat"));
    PeanutsAllergyCheckBox = new QCheckBox(tr("&Peanuts"));
    shellfishAllergyBox = new QCheckBox(tr("&Shellfish"));

    // Organize checkboxes in layout
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(wheatAllergyCheckBox);
    vbox->addWidget(PeanutsAllergyCheckBox);
    vbox->addWidget(shellfishAllergyBox);
    vbox->addStretch(1);
    // Set layout of QGroupBox
    groupBox->setLayout(vbox);

    // return QGroupBox containing checkboxes of potential dietary allergies
    return groupBox;

}

/*
Function name: createCuisineGroup

Description: Create a group box containing checkboxes corresponding to potential cuisine preferances
                              
Parameter descriptions: NA

Return description: QGroupBox
*/
QGroupBox *UserPreferenceWindow::createCuisineGroup()
{
    // Initialize new QGroupBox
    QGroupBox *groupBox = new QGroupBox(tr("Cuisine"));
    groupBox->setFlat(true);

    // Initialize 3 QCheckBox objects to store a cuisine preferance
    greekCuisineCheckBox = new QCheckBox(tr("&Greek"));
    frenchCuisineCheckBox = new QCheckBox(tr("&French"));
    italianCuisineCheckBox = new QCheckBox(tr("&Italian"));

    // Organize checkboxes in layout
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(greekCuisineCheckBox);
    vbox->addWidget(frenchCuisineCheckBox);
    vbox->addWidget(italianCuisineCheckBox);
    vbox->addStretch(1);
    // Set layout of QGroupBox
    groupBox->setLayout(vbox);

    // return QGroupBox containing checkboxes of cuisine preferences
    return groupBox;
}

/*
Function name: createDietGroup

Description: Create a group box containing checkboxes corresponding to potential dietary preferances
                              
Parameter descriptions: NA

Return description: QGroupBox
*/
QGroupBox *UserPreferenceWindow::createDietGroup()
{
    // Initialize new QGroupBox
    QGroupBox *groupBox = new QGroupBox(tr("Diet"));
    groupBox->setFlat(true);

    // Initialize 3 QCheckBox objects to store a dietary preferance
    vegetarianDietCheckBox = new QCheckBox(tr("&Vegetarian"));
    veganDietCheckBox = new QCheckBox(tr("&Vegan"));
    carnivoreDietCheckBox = new QCheckBox(tr("&Carnivore"));

    // Organize checkboxes in layout
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(vegetarianDietCheckBox);
    vbox->addWidget(veganDietCheckBox);
    vbox->addWidget(carnivoreDietCheckBox);
    vbox->addStretch(1);
    // Set layout of QGroupBox
    groupBox->setLayout(vbox);

    // return QGroupBox containing checkboxes of cuisine preferences
    return groupBox;

}

/*
Function name: createFitnessgoalGroup

Description: Create a QGroupBox to allow a user to manage their fitness preferences. 
        - QGroupBox allows the user to input their target calories and macronutrient count(carbohydrates, protein, fat)
                              
Parameter descriptions: NA

Return description: QGroupBox
*/
QGroupBox *UserPreferenceWindow::createFitnessgoalGroup()
{
    

    // Initialize new QGroupBox
    QGroupBox *groupBox = new QGroupBox(tr("Fitness Goals"));
    groupBox->setFlat(true);

    // Initialize QLabel, indicate to user that the QLineEdit below is for inputting their target calories
    QLabel *caloriesLabel = new QLabel(tr("Calories: "));
    // Input target calorie goal
    caloriesLine = new QLineEdit;

    // Initialize QLabel, indicate to user that the QLineEdit below is for inputting their target protein count (in grams)
    QLabel *proteinLabel = new QLabel(tr("Protein (g): "));
    // Input target protein count (in grams) 
    proteinLine = new QLineEdit;

    // Initialize QLabel, indicate to user that the QLineEdit below is for inputting their target fat count (in grams)
    QLabel *fatLabel = new QLabel(tr("Fat (g): "));
    // Input target protein count (in grams) 
    fatLine = new QLineEdit;

    // Initialize QLabel, indicate to user that the QLineEdit below is for inputting their target carbohydrate count (in grams)
    QLabel *carbsLabel = new QLabel(tr("Carbohydrates (g): "));
    // Input target carbohydrate count (in grams)
    carbsLine = new QLineEdit;

    // Initialize QVBoxlayout for QGroupBox
    QVBoxLayout *vbox = new QVBoxLayout;
    // Organize QLabel and QLineEdit for calories into QVBoxLayout
    vbox->addWidget(caloriesLabel);
    vbox->addWidget(caloriesLine);
    caloriesLine->setValidator(new QIntValidator(0, 4000, this)); //this allows only numeric value

    // Organize QLabel and QLineEdit for protein into QVBoxLayout
    vbox->addWidget(proteinLabel);
    vbox->addWidget(proteinLine);
    proteinLine->setValidator(new QIntValidator(0, 4000, this)); //this allows only numeric value

    // Organize QLabel and QLineEdit for fat into QVBoxLayout
    vbox->addWidget(fatLabel);
    vbox->addWidget(fatLine);
    fatLine->setValidator(new QIntValidator(0, 4000, this)); //this allows only numeric value

    // Organize QLabel and QLineEdit for carbohydrate into QVBoxLayout
    vbox->addWidget(carbsLabel);
    vbox->addWidget(carbsLine);
    carbsLine->setValidator(new QIntValidator(0, 4000, this)); //this allows only numeric value

    vbox->addStretch(1);
    // Set layout of QGroupBox 
    groupBox->setLayout(vbox);

    // Return QGroupBox
    return groupBox;

}

/*
Function name: savePreference

Description: 
    i) Extract the user preferences inputted by the user into the gui.
    i) Use the UserPreferencesController to save the user preferences into a file corresponding to the username of the user.
                              
Parameter descriptions: NA

Return description: void
*/
void UserPreferenceWindow::savePreference()
{
    DietList dietListObj;
    CuisineList cuisineListObj;
    AllergyList allergyListObj;
    // Initialize UserPreferences Object with the username (used to create file for specific user)
    userPrefControllerObj.setUserName(username);
    // Initialize default values for calories, protein, carbs, fat to 0
    std::string calorie = "0";
    std::string protein = "0";
    std::string fat = "0";
    std::string carb = "0";

    // If user inputs a value for calories, save input to variable
    if (caloriesLine->text() != ""){
        // Convert user input from QString to string
        calorie = caloriesLine->text().toStdString();
    }
    // If user inputs a value for protein, save input to variable
    if (proteinLine->text() != ""){
        // Convert user input from QString to string
        protein = proteinLine->text().toStdString();
    } 
    // If user inputs a value for fat, save input to variable
    if (fatLine->text() != ""){
        // Convert user input from QString to string
        fat = fatLine->text().toStdString();
    } 
    // If user inputs a value for carbohydrate, save input to variable
    if (carbsLine->text() != ""){
        // Convert user input from QString to string
        carb = carbsLine->text().toStdString();
    } 

    // Initialize FitnessPreferences Object
    fitnessPrefObj.setCalorie(std::stoi(calorie)); // Convert string to int
    fitnessPrefObj.setProtein(std::stoi(protein)); // Convert string to int
    fitnessPrefObj.setCarb(std::stoi(carb)); // Convert string to int
    fitnessPrefObj.setFat(std::stoi(fat)); // Convert string to int


    // Create file for fitness preferences
    userPrefControllerObj.setFitnessPreferences(fitnessPrefObj);

    // Check Dietary Preferences from checkboxes and input into DietList vector
    if(vegetarianDietCheckBox->isChecked()){
        dietListObj.addDiet("Vegetarian");
    }
    if(veganDietCheckBox->isChecked()){
        dietListObj.addDiet("Vegan");
    }if(carnivoreDietCheckBox->isChecked()){
        dietListObj.addDiet("Carnivore");
    }
    // Check Cuisine Preferences From Checkboxes and input into CuisineList vector
    if(greekCuisineCheckBox->isChecked()){
        cuisineListObj.addCuisine("Greek");
    }
    if(frenchCuisineCheckBox->isChecked()){
        cuisineListObj.addCuisine("French");
    }if(italianCuisineCheckBox->isChecked()){
        cuisineListObj.addCuisine("Italian");
    }
    // Check Allergy Preferences From checkboxes and input into AllergyList vector
    if(wheatAllergyCheckBox->isChecked()){
        allergyListObj.addAllergy("Wheat");
    }
    if(PeanutsAllergyCheckBox->isChecked()){
        allergyListObj.addAllergy("Peanut");
    }
    if(shellfishAllergyBox->isChecked()){
            allergyListObj.addAllergy("Shellfish");
    }
    // Create dietlist, allergylist, cuisinelist files for specific username
    userPrefControllerObj.setDietList(dietListObj);
    userPrefControllerObj.setAllergyList(allergyListObj);
    userPrefControllerObj.setCuisineList(cuisineListObj);


    // Indicate Successful Save
    QMessageBox::information(this, tr("Save Successful"), tr("Your preference has been added."));
}

/*
Function name: populate

Description: Populate the checkboxes and input fields in UserPreferenceWindow with data from the user's file
    i) Extract the user preference data, corresponding to the username, from the user's file.
    i) Populate the UserPreferenceWindow GUI with the user preference data corresponding to the username.
                              
Parameter descriptions: NA

Return description: void
*/
// Set the values of qLineEdit fields to the values from the UserPreferences object
void UserPreferenceWindow::populate()
{
    DietList dietListObj;
    CuisineList cuisineListObj;
    AllergyList allergyListObj;
    // Initialize UserPreferences Object with the username (used to create file for specific user)
    userPrefControllerObj.setUserName(username);
    // get fitness preferences (corresponding to specific username) from file
    fitnessPrefObj = userPrefControllerObj.getFitnessPreferences();

    // convert values of type int into type qstring
    QString qcal = QString::number(fitnessPrefObj.getCalorie());
    QString qprotein = QString::number(fitnessPrefObj.getProtein());
    QString qfat = QString::number(fitnessPrefObj.getFat());
    QString qcarb = QString::number(fitnessPrefObj.getCarb());


    // Set qLineEdit fields to values from FitnessPreferences Object (corresponding to specific user)
    caloriesLine->setText(qcal);
    proteinLine->setText(qprotein);
    carbsLine->setText(qcarb);
    fatLine->setText(qfat);

    // Initialize the object of type DietList
    dietListObj = userPrefControllerObj.getDietList();
    // Initialize the object of type CuisineList
    cuisineListObj = userPrefControllerObj.getCuisineList();
    // Initialize the object of type AllergyList
    allergyListObj = userPrefControllerObj.getAllergyList();

    // From the user's file, populate the checkboxes corresponding to the user's specific dietary preferences
    if(dietListObj.getDiet("Vegan")!=-1){
        veganDietCheckBox->setChecked(true);
    }
    if(dietListObj.getDiet("Vegetarian")!=-1){
        vegetarianDietCheckBox->setChecked(true);
    }
    if(dietListObj.getDiet("Carnivore")!=-1){
        carnivoreDietCheckBox->setChecked(true);
    }
    // From the user's file, populate the checkboxes corresponding to the user's specific allergy restrictions
    if(allergyListObj.getAllergy("Wheat")!=-1){
        wheatAllergyCheckBox->setChecked(true);
    }
    if(allergyListObj.getAllergy("Peanut")!=-1){
        PeanutsAllergyCheckBox->setChecked(true);
    }
    if(allergyListObj.getAllergy("Shellfish")!=-1){
        shellfishAllergyBox->setChecked(true);
    }
    // From the user's file, populate the checkboxes corresponding to the user's specific cuisine preferences
    if(cuisineListObj.getCuisine("French")!=-1){
        frenchCuisineCheckBox->setChecked(true);
    }
    if(cuisineListObj.getCuisine("Italian")!=-1){
        italianCuisineCheckBox->setChecked(true);
    }
    if(cuisineListObj.getCuisine("Greek")!=-1){
        greekCuisineCheckBox->setChecked(true);
    }
}

