#ifndef USERPREFERENCEWINDOW_H
#define USERPREFERENCEWINDOW_H


#include "FitnessPreferences.h"
#include "UserPreferencesController.h"
#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QListWidget>
#include <QMap>
#include <QCheckBox>
#include <QObject>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QString>
#include <QGroupBox>
#include <QMenu>
#include <QMenuBar>
#include <QToolBar>

class UserPreferenceWindow: public QWidget
{
public:
    UserPreferenceWindow(QWidget *parent=nullptr);
    void setUserName(std::string);
    std::string getUserName();
    void populate();

public slots:
    void savePreference();

//    void createMenus();

private:
    std::string username;
    UserPreferencesController userPrefControllerObj;
    FitnessPreferences fitnessPrefObj;
    

    QGroupBox *createAllergiesGroup();
    QGroupBox *createCuisineGroup();
    QGroupBox *createDietGroup();
    QGroupBox *createFitnessgoalGroup();

    // Input from GUI
    QLineEdit *caloriesLine;
    QLineEdit *proteinLine;
    QLineEdit *fatLine;
    QLineEdit *carbsLine;


    //allergy check boxes
    QCheckBox *wheatAllergyCheckBox;
    QCheckBox *PeanutsAllergyCheckBox;
    QCheckBox *shellfishAllergyBox;

    // diet checkboxes
    QCheckBox *vegetarianDietCheckBox;
    QCheckBox *veganDietCheckBox;
    QCheckBox *carnivoreDietCheckBox;

    // cuisine checkboxes
    QCheckBox *greekCuisineCheckBox;
    QCheckBox *frenchCuisineCheckBox;
    QCheckBox *italianCuisineCheckBox;

    QPushButton *saveButton;

};

#endif // USERPREFERENCEWINDOW_H