/* 
 * File:   main.cpp
 * Author: OmarKaayal
 *
 * Created on July 7, 2015, 6:50 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

int month, day, year;
int magic;

cout << "Enter a month" << endl;
cin >> month;

cout << "Enter a day" << endl;
cin >> day;

cout << "Enter a year" << endl;
cin >> year;

magic = (month * day);

if (magic == year)
{
cout << "date is magic"<< endl ;
}
else
cout << "date is not magic" << endl;

return 0;
}

