/*
 * Runner.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: jelm9149
 */
#include <iostream>
using namespace std;
#include "StringController.cpp"
#include "StringController.h"

int main()
{
	StringController * baseController = new StringController();
	baseController->start();
	return 0;


	char greeting[7] = {'J', 'o', 's', 'i', 'a', 'h', '\0'};

	cout << "Greeting message: ";
	cout << greeting << endl;

	return 0;
}


