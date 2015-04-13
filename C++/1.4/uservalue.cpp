/*
 * =====================================================================================
 *
 *       Filename:  uservalue.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/2015 03:53:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Andrew Moyer (), andrew-blaine@hotmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>

// getValueFromUser will read a value from the user and return to the caller
int getValueFromUser()
{
	using namespace std;
	int valueA;
	valueA = 0;
	cout << "Enter an integer: ";
	cin >> valueA;
	return valueA;
}

int main()
{
	using namespace std;
	int x;
	int y;
	int z;
	x = 0;
	y = 0;
	z = 0;
	
	x = getValueFromUser(); //First call of getValue
	y = getValueFromUser(); //Second call of getValue
	
	z = x + y;

	cout << x << " + " << y << " = " << z << endl;

	return 0;
}
