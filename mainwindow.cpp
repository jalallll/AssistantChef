/*
Authors: 
    - Gina Choi 
    - Jalal Qureshi

Description of file contents: Displays the main GUI
                         
Date: 11/30/2021
*/

#include "mainwindow.h"
#include "userpreferencewindow.h"

#include "FoodList.h"
#include "RequestHandler.h"
#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QLabel>
#include <QGridLayout>
#include <QPushButton>
#include <QString>
#include <QPushButton>
#include <QMessageBox>
#include <QListWidget>
#include <iostream>

#include <QMenuBar>
#include <QMenu>
/*
 *This class sets up a main log in page
 *
 *
 */
MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent), handler("9942acea16ab4da3886df33e7610f062"), username("insideMainwindow")
{
    UserPreferenceWindow UserPreference_Window;
    Calendar cal;

    //create ingredient field
    QLabel *ingredientLabel = new QLabel(tr("Enter your ingredient: "));
    ingredientEnterLine = new QLineEdit;

    //create ingredient list field
    QLabel *ingredientlistLabel = new QLabel(tr("Your Ingredients: "));
    ingredientlistText = new QTextEdit;
    ingredientlistText->setReadOnly(true);

    //create suggested recipes field
    QLabel *suggestedReceipeLabel = new QLabel(tr("Suggested Recipes: "));
    suggestedRecipeText = new QTextEdit;
    suggestedRecipeText->setReadOnly(true);

    connect(suggestedRecipeText, &QTextEdit::selectionChanged, this, &MainWindow::getInfoOfRecipe);

    //create add button and connect the button to the addIngredient
    addButton = new QPushButton(tr("Add"));
    addButton->show();
    connect(addButton, &QPushButton::clicked, this, &MainWindow::addIngredient);

    //create find receipe button and connect the button to the findRecipes
    findRecipesButton = new QPushButton(tr("Find Recipes"));
    findRecipesButton->show();
    connect(findRecipesButton, &QPushButton::clicked, this, &MainWindow::findRecipes);

    //layout labels, lines, buttons
    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addWidget(ingredientLabel, 0, 0);
    mainLayout->addWidget(ingredientEnterLine, 1, 0);
    mainLayout->addWidget(addButton, 1, 1);

    mainLayout->addWidget(ingredientlistLabel, 2, 0);
    mainLayout->addWidget(ingredientlistText, 3, 0);
    mainLayout->addWidget(findRecipesButton, 4, 0);

    mainLayout->addWidget(suggestedReceipeLabel, 5, 0);
    mainLayout->addWidget(suggestedRecipeText, 6, 0);

    setLayout(mainLayout);
    setWindowTitle(tr("MAINGUI"));

    //added the menu bar
    QMenuBar* menubar = new QMenuBar();
    QMenu *fileMenu = new QMenu("File");
    menubar->addMenu(fileMenu);
    fileMenu->addAction("Logout");
    QMenu *userMenu = new QMenu("User");
    menubar->addMenu(userMenu);
    ///
    QAction* open_user_pref = userMenu->addAction("Open User Preference");
    connect(open_user_pref, SIGNAL(triggered()) , this, SLOT(openPreferences()));
    //
    userMenu->addAction("Close User Preference");
    QMenu *calendarMenu = new QMenu("Calendar");
    menubar->addMenu(calendarMenu);

    QAction* open_cal = calendarMenu->addAction("View Calendar");
    connect(open_cal, SIGNAL(triggered()) , this, SLOT(openCalender()));


    this->layout()->setMenuBar(menubar);
}

void MainWindow::setUserName(std::string user){
    username=user;
}

std::string MainWindow::getUserName(){
    return username;
}

MainWindow::~MainWindow()
{
}
void MainWindow::openPreferences(){
    UserPreference_Window.setUserName(username);
    UserPreference_Window.populate();
    UserPreference_Window.show();
}
void MainWindow::openCalender(){
    // UserPreference_Window.setUserName(username);
    // UserPreference_Window.populate();
    // UserPreference_Window.show();
    cal.show();
}

//addIngredient adds the users' entered ingredients to the ingredients list before finding the recipes
void MainWindow::addIngredient()
{
    QString ingredient = ingredientEnterLine->text();
    QString ingredientlist = ingredientlistText->toPlainText();

    if (ingredient.isEmpty())
    {
        QMessageBox::information(this, tr("Empty Field"), tr("Please enter your ingredient."));
        return;
    }
    else //ingredient list is not empty. User entered ingredients in the text line
    {
        //Enter all the users' ingredients to the ingredient list
        ingredientlistText->append(ingredient);
        listOfFood.addFood(ingredient.toStdString());
        ingredientEnterLine->clear();
    }
}

//findRecipes will find some recipes from recipe database based on the user's input
void MainWindow::findRecipes()
{
    suggestedRecipeText->clear();
    recipeList = handler.getRecipesFromAPI(listOfFood);
    std::string finalList;
    for (int i = 0; i < recipeList.getSize(); i++)
    {
        finalList = finalList + std::to_string(i + 1) + "." + recipeList.findRecipeByIndex(i).getRecipeName() + "\n";
    }
    QString qstr = QString::fromStdString(finalList);
    suggestedRecipeText->setText(qstr);
}

void MainWindow::getInfoOfRecipe()
{ 
    // Make sure there are recipes in the list 
    if (recipeList.getSize() > 0){
        // Temp variables to identify the recipe
        QTextCursor cursor;
        QString text;

        // Obtain the line of text that is underneath the cursor
        cursor = suggestedRecipeText->textCursor();
        cursor.movePosition(QTextCursor::StartOfLine);
        cursor.movePosition(QTextCursor::EndOfLine, QTextCursor::KeepAnchor);
        text = cursor.selectedText();

        // Grab the index of that recipe
        int index = text.left(1).toInt()-1;

        // Grab the recipe from the recipe list
        Recipe currentSelection = recipeList.findRecipeByIndex(index);

        QMessageBox::information(this, "Ingredients", QString::fromStdString("The ingredients of \"" + currentSelection.getRecipeName() + "\" are: \n" + handler.getRecipeDetails(currentSelection.getRecipeID())));
    }
}