#include "calenderWindow.h"
#include <QCalendarWidget>
#include <QWidget>
#include <QGridLayout>
#include <QMenu>
#include <QMenuBar>
#include <QDate>
#include <QCheckBox>
#include <QLineEdit>
#include <QLabel>
#include <QDateEdit>
#include <QString>
#include <QTextEdit>
#include <iostream>

/**
 * @brief calendar::calendar
 * @param parent
 * @author Gina Choi
 *
 * This calendar class displays the calendar widget after a user selects show calendar on the main gui under 'show calendar' to check whether they met the goal today
 */
Calendar::Calendar(QWidget *parent)
    :QWidget(parent)
{

    //set up the QCalendar Widget to display the calendar
    //set min date available to Jan 1 2000 and max date available to Jan 1 3000
    calendarWidget = new QCalendarWidget;
    calendarWidget->setGridVisible(true);
    calendarWidget->setMinimumDate(QDate(2000, 1, 1));
    calendarWidget->setMaximumDate(QDate(3000, 1, 1));

    //test-print the data selected from the calendar to the line edit
    outputText = new QTextEdit;
    outputText->setReadOnly(true);
    //test-check whether the check box was selected and print the result
    checkBoxText = new QTextEdit;
    checkBoxText->setReadOnly(true);

    //add goal check box and connect that checkbox to the checkboxtext to see whether it was selected
    metGoalToday = new QCheckBox("I met my goals for today!", this);
    connect(metGoalToday, SIGNAL(toggled(bool)), this, SLOT(saveDateToFile(bool)));

    //add the calendarwidget, goalcheckbox, outputext, checkboxtext to the widget
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(calendarWidget);
    layout->addWidget(metGoalToday, 1,0);
    layout->addWidget(outputText, 2, 0);
    layout->addWidget(checkBoxText, 3, 0);

    setLayout(layout);
    setWindowTitle(tr("Calendar Window"));

    //connect the calendar widget to the outputText
    //user selected date will be stored in the text file
    connect(calendarWidget, &QCalendarWidget::clicked, this, &Calendar::getSelectedDate);

}

/**
 * @brief calendar::getSelectedDate
 * @param date
 *
 * This getSelectedDate method displays the user selected date in yyyy-mm-dd form
 */
void Calendar::getSelectedDate(QDate date)
{   
    outputText->setText(date.toString("yyyy-M-d"));
    metGoalToday->setChecked(false);
}


void Calendar::closeCalendar()
{

}

/**
 * @brief calendar::isCheckboxSelected
 * @param checked
 *
 * This isCheckboxSelected method checks whether the check box is selected and displays an appropriate message
 */
void Calendar::saveDateToFile(bool checked)
{
    //check box is selected
    if (checked)
    {
        checkBoxText->setText("Checkbox is selected!");
        QDate date=calendarWidget->selectedDate(); 
        
        std::string str = calendarWidget->selectedDate().toString("yyyy-M-d").toStdString();
        std::cout<< "\nSelected Date\n"<<date.toString().toStdString();
    }
    //check box is not selected
    else
    {
        checkBoxText->setText("Checkbox is NOT selected!");
    }
}