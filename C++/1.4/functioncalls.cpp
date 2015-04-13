/*
 * =====================================================================================
 *
 *       Filename:  functioncalls.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/2015 03:45:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Andrew Moyer (), andrew-blaine@hotmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>


//Defining doPrint()
void doPrint()
{
	using namespace std;
	cout << "In doPrint()" << endl;
}

//Definiton of main function
int main()
{
	using namespace std;
	cout << "Starting main()" << endl;
	doPrint();			  //Interupt main by making doPrint funcition call
	cout << "Ending main()" << endl;
	return 0;
}
