#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QListWidget>
#include <QMap>
#include <QMenuBar>
#include <QMenu>

#include "calenderWindow.h"
#include "RecipeList.h"
#include "FoodList.h"
#include "RequestHandler.h"
#include "userpreferencewindow.h"

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setUserName(std::string);
    std::string getUserName();

private:
    QLineEdit *ingredientEnterLine;
    QTextEdit *ingredientlistText;
    QTextEdit *suggestedRecipeText;

    QPushButton *addButton;
    QPushButton *findRecipesButton;

    FoodList listOfFood;
    RequestHandler handler;
    UserPreferenceWindow UserPreference_Window;

    std::string username;
    Calendar cal;
    RecipeList recipeList;

public slots:
    void addIngredient();
    void findRecipes();
    void openPreferences();
    void openCalender();
    void getInfoOfRecipe();
};

#endif // MAINWINDOW_H