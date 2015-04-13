/*
 * =====================================================================================
 *
 *       Filename:  doublenum.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/2015 04:05:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Andrew Moyer (), andrew-blaine@hotmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>

int doubleNumber(int x)
{
	return x * 2;
}

int main()
{
	using namespace std;
	int userNumber;
	userNumber = 0;

	cout << "Enter the number you want doubled: ";
	cin >> userNumber;
	cout <<"Your number is: " << doubleNumber(userNumber) << endl;
	return 0;
}
