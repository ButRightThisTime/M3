//this file contains the implementation of the Date class see header file for more detailed information on what the date class does
#pragma once
#include <iostream>
#include <string>
#include "Date.h" // filepath to date.h
Date::Date(int m, int d, int y){ ///constructor
    setDate(m, d, y); /// use variables from constructor in mutator function
}
void Date::setDate(int m, int d, int y) { /// mutator function to set the date with input validation and default of 1/1/1900
    
    if (m < 1 || m > 12) { // check if month is between 1 & 12
        std::cout << "Invalid month. Default date set (1/1/1900)\n";
    }
    else if (y <= 0) { //check if year is above or equal to zero 0
        std::cout << "Invalid year. Default date set (1/1/1900)\n";
    }
    else if (d < 1 || d > lastDay(m, y)) { // check if day is between first and last day of month
        std::cout << "Invalid day. Default date set (1/1/1900)\n";
    }
    else { // if everything is valid set values
        month = m;
        day = d;
        year = y;
        return;
    }
    // Set default date if any of the conditions are not met
    month = 1;
    day = 1;
    year = 1900;
}
std::string Date::getMonthName() {
    std::string months[12] = {
        "January","February","March","April","May","June","July","August","September","October","November","December"
    };
    return months[month - 1];
}
void Date::fancyPrintMDY() {
    std::cout << getMonthName() << " " << day << ", " << year << std::endl;
}
void Date::fancyPrintDMY() {
    std::cout << day << " " << getMonthName() << " " << year << std::endl;
}
inline int Date::getDay() { return day; } // day accessor function
inline int Date::getMonth() { return month; } //month accesssor function
inline int Date::getYear() { return year; } // year accessor function
void Date::printDate() {
    std::cout << month << "/" << day << "/" << year << std::endl;
}
int Date::lastDay() { // deffault function to get the last day of the classes month
    if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) { // months with 31 days
        return 31;
    }
    if ((month == 4) || (month == 6) || (month == 9) || (month == 11)) { // months with 30 days
        return 30;
    }
    if (isLeapYear()) return 29; // check if its a leap year and return correct number of days
    return 28;
}
int Date::lastDay(int m, int y) { // overloaded last day function same as above
    if ((m == 1) || (m == 3) || (m == 5) || (m == 7) || (m == 8) || (m == 10) || (m == 12)) {
        return 31;
    }
    if ((m == 4) || (m == 6) || (m == 9) || (m == 11)) {
        return 30;
    }
    if (isLeapYear(y)) return 29;
    return 28;
}
bool Date::isLeapYear() { // check if its a leap year
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0))) return true; // formula for if a given year is a leap year
    else return false;
}
bool Date::isLeapYear(int y) {//overloaded functoin to check if its a leap year same as above
    if ((y % 4 == 0) && ((y % 100 != 0) || (y % 400 == 0))) return true;
    else return false;
}
