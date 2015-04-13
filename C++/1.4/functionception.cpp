/*
 * =====================================================================================
 *
 *       Filename:  functionception.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/2015 03:57:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Andrew Moyer (), andrew-blaine@hotmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>

void printA()
{
	std::cout << "A" << std::endl;
}

void printB()
{
	std::cout << "B" << std::endl;
}

void printAB()
{
	printA();
	printB();
}

int main()
{
	using namespace std;
	cout << "Starting main()" << endl;
	printAB();
	cout << "Ending main()" << endl;
	return 0;
}
