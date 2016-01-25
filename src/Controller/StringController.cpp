/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: jelm9149
 */

#include <iostream>
#include "StringController.h"
#include <String>
using namespace std;

StringController::StringController()
{
	this->className = "";
}

void StringController::start()
{

}
void StringController :: getClassName(string className)
{
	this->className = className;

}

string StringController :: getClassName()
{
	return this->className;
}



