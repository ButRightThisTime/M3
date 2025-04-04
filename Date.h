//header file for the date class 
/*
class stores month day and year defaults to 1/1/1900
has accessor functions for each of said int values
is leapYear determines if the given year is a leapyear using either explicit input or stored value
set date is called automatically in the constructor but can also be used as a mutator function and contains input validation
getDay, getMonth, and getYear are inline accessor functions for respective member variables
*/
#pragma once
class Date
{
public:
    Date(int m = 1, int d = 1, int y = 1900);
    void setDate(int m, int d, int y);
    inline int getDay();
    inline int getMonth();
    inline int getYear();
    void printDate();
    
    void fancyPrintMDY();
    void fancyPrintDMY();
private:
    int month;
    int day;
    int year;
    int lastDay();
    std::string getMonthName();
    int lastDay(int m, int y);
    bool isLeapYear();
    bool isLeapYear(int y);
   
};
