#ifndef CALENDARWINDOW_H
#define CALENDARWINDOW_H

#include <QCalendarWidget>
#include <QWidget>
#include <QMenu>
#include <QMenuBar>
#include <QCheckBox>
#include <QDate>
#include <QLineEdit>
#include <QLabel>
#include <QTextEdit>

/**
 * @brief The calendar class
 * @author Gina Choi
 *
 * This is calendar.h initializes all the classes and variables will be used in calendar.cpp
 */

class Calendar: public QWidget
{
        Q_OBJECT
public:
    Calendar(QWidget *parent = nullptr);

public slots:
    void getSelectedDate(QDate date);
    void saveDateToFile(bool checked);
    void closeCalendar();

private:

    QCalendarWidget *calendarWidget;

    QCheckBox *metGoalToday;

    QLineEdit *dateSelectedLine;

    QTextEdit *outputText;
    QTextEdit *checkBoxText;
    
};

#endif // CALENDAR_H