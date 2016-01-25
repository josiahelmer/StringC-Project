/*
 * Controller.h
 *
 *  Created on: Jan 25, 2016
 *      Author: jelm9149
 */

#ifndef CONTROLLER_STRINGCONTROLLER_H_
#define CONTROLLER_STRINGCONTROLLER_H_
#include <string>
using namespace std;

class StringController
{
private:
	int classCount:
	string className;
public:
	StringController();
	string getClassName();
	void start();
};



#endif /* CONTROLLER_STRINGCONTROLLER_H_ */
