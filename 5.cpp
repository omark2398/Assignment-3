/* 
 * File:   main.cpp
 * Author: OmarKaayal
 *
 * Created on July 7, 2015, 8:43 PM
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int nbooks;          // Number of books purchased in a month
	int points;       // Number of points earned

	// Input the number of books purchased
	cout << "How many books did you purchase this month? ";
	cin  >> nbooks;

	// Determine the number of points awarded
	if (nbooks <= 0)
        {points = 0;}
	else if (nbooks == 1)
        {points = 5;}
	else if (nbooks == 2)
        {points = 15;}
	else if (nbooks == 3)
        {points = 30;}
	else 
	{points = 60;}

	// Display the result
	cout << "You earned " << points << " points this month.";

	return 0;
}


