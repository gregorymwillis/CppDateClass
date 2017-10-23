/**************************************************************************
** Author: Greg Willis
** Date: 10/22/2017
** Description: Date class declaration file Date.hpp
***************************************************************************/
#ifndef DATE_HPP
#define DATE_HPP

#include <string>

using std::string;

class Date {
	private:
		int month;
		int day;
		int year;

	public:
		// Constructor
		Date() {
			setMonth(1);
			setDay(1);
			setYear(2001);
		}
		Date(int, int, int);

		// Setter functions
		bool setMonth(int);
		bool setDay(int);
		bool setYear(int);

		// Getter functions
		int getMonth();
		int getDay();
		int getYear();

		// Printing format functions
		void printFormat1(Date);	// Format: MO/DY/YR
		void printFormat2(Date);	// Format: Month 00, YEAR
		void printFormat3(Date);	// Format: 00 Month YEAR
		string getMonthString(Date);	// Returns string of entered month
};
#endif 
