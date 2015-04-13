/*
 * =====================================================================================
 *
 *       Filename:  1-4B.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/2015 03:48:50 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Andrew Moyer (), andrew-blaine@hotmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>

void returnNothing()
{
	//Doesnt return anything so no return value neccesary
}

int return5()
{
	return 5;	//Function returns int so return statements neccesary
}

int main()
{
	using namespace std;
	cout << return5();	//Print return5 which evaulautes to 5
	//cout << returnNothing(); //Note out for no return
	returnNothing();
	return5();

}
