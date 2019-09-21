/*
 * main.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: Huy
 */

#include <iostream>
#include <stdio.h>
#include <string>
#include "Student.h"

using namespace std;

int main(int argc, char* argv[]) {

	int i;
	Student myStudent1, myStudent2;
	myStudent1.setFullInfo();
	myStudent1.getFullInfo();

	myStudent2.setFullInfo();
	myStudent2.getFullInfo();	//Question: Student2 has bug. Cannot enter name. Get straight to address. Why?



	//myStudent2.setFullInfo();
	//myStudent.setCurrentSemester();


/*for (i = 1; i < 10; i++)
{
	j = i*i;
	cout << i << " * " << i << " = " << j << endl;
}*/
}



