/**************************************************************************
** Author: Greg Willis
** Date: 10/22/2017
** Description: Date.cpp implementatoin file
***************************************************************************/
#include "Date.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::to_string;
using std::endl;

// Constructor
Date::Date(int m, int d, int y) {
	setMonth(m);
	setDay(d);
	setYear(y);
}

// Setter functions
bool Date::setMonth(int m) {
	if(m >= 1 && m <= 12) {
		month = m;
		return true;
	}
	else {
		return false;
	}
}

bool Date::setDay(int d) {
	if(d >= 1 && d <= 31) {
		day = d;
		return true;
	}
	else {
		return false;
	}
}

bool Date::setYear(int y) {
	if(y < 10000 && y > 1000) {
		year = y;
		return true;
	}
	else {
		return false;
	}
}

// Getter functions
int Date::getMonth() {
	return month;
}

int Date::getDay() {
	return day;
}

int Date::getYear() {
	return year;
}

// Print format functions

	// 10/21/17
void Date::printFormat1(Date d) {
	string temp;
	temp = to_string(d.getYear());
	temp.erase(0,2);
	cout << d.getMonth() << "/" << d.getDay() << "/" << temp << endl;
}

	// October 21, 2017
void Date::printFormat2(Date d) {
	string month = d.getMonthString(d);
	cout << month << " " << d.getDay() << ", " << d.getYear() << endl;
}

	// 21 October 2017
void Date::printFormat3(Date d) {
	string month = d.getMonthString(d);
	cout << d.getDay() << " " << month << " " << d.getYear() << endl;
}

string Date::getMonthString(Date d) {
	int index = d.getMonth() - 1;
	string months[12] = {"January", "February", "March", "April",
				"May", "June", "July", "August",
				"September", "October", "November", "December"};	
	return months[index];
} 
