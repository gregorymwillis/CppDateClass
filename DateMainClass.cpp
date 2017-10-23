/**************************************************************************
** Author: Greg Willis
** Date: 10/22/2017
** Description: Main function to test Date class
***************************************************************************/
#include "Date.hpp"
#include <iostream>

using std::cout;

int main() {
	
	Date first(10, 22, 2017);
	first.printFormat1(first);
	first.printFormat2(first);
	first.printFormat3(first);

	Date second;
	second.printFormat1(second);
	second.printFormat2(second);
	second.printFormat3(second);
}
