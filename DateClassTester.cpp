//This file tests the date class which is described in detail in the date.h file
#pragma once
#include "Date.h"
#include <iostream>
using namespace std;
int main() {
	Date date{};
	cout << "test default constructor: ";
	date.printDate();
	cout << "\ntest constructor with valid date(2,28,2009): ";
	Date date1{ 2,28,2009 };
	date1.printDate();
	cout << "\ntest constructor with invalid month(45,2,2009): ";
	Date date2{ 45,2,2009 };
	date2.printDate();
	cout << "\n test constructor with invalid day(2,50,2009): ";
	Date date3{ 2,50,2009 };
	date3.printDate();
	cout << "\n test setDate with invalid day(4,31,2009): ";
	Date date4{ 4,31,2009 };
	date4.printDate();
	cout << "\n test setDate with invalid month(13,29,2009): ";
	Date date5{ 13,29,2009 };
	date5.printDate();
	cout << "\n Test for leap year with bad date (2/29/2009): ";
	Date date6{ 2 , 29 , 2009 };
	date6.printDate();
	cout << "\n Test for leap year with good date (2/29/2008): ";
	Date date7{ 2 , 29 , 2008 };
	date7.printDate();
	cout << "test print formats\n";
	date7.fancyPrintDMY();
	date7.fancyPrintMDY();
}
