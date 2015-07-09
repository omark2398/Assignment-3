/* 
 * File:   main.cpp
 * Author: OmarKaayal
 *
 * Created on July 7, 2015, 6:31 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {

    float num1;
    float num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    if (num1 > num2)
    {
    cout << "First number is larger " << num1 <<endl;
    }
    if (num2 > num1)
    {
    cout << "Second number is larger " << num2 << endl;
    }
    return 0;
}

