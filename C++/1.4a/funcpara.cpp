/*
 * =====================================================================================
 *
 *       Filename:  funcpara.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/2015 04:01:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Andrew Moyer (), andrew-blaine@hotmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>

int add(int x, int y)
{
	return x + y;
}

int main()
{
	using namespace std;
	cout << add(4, 5) << endl;
	return 0;
}
