/*
 * Student.cpp
 *
 *  Created on: Sep 10, 2019
 *      Author: Huy
 */
#include "Student.h"
#include <string>

using namespace std;

/*void Student::setName(void)
{
	cout << "Enter name: " << endl;
	//gets(name); //To include spaces in the input
	cin >> name;
	cout <<"Student's name is " <<name << endl;
}*/

void Student::setName(std::string s)
{
	name = s;
}

/*void Student::setAddress(void)
{
	cout << "Enter address: " << endl ;
	gets(address);	//To include spaces in the input
	//cin >> address;
	cout <<"Student's address is " <<address << endl;
}*/

void Student::setAddress(std::string x)
{
	address = x;
}

/*void Student::setMatrNumber(void)
{
	cout << "Enter matriculation number: " << endl;
	cin >> matrNumber;
	cout <<"Student's matriculation number is " <<matrNumber << endl;
}*/

void Student::setMatrNumber(int i)
{
	matrNumber = i;
}

void Student::setCurrentSemester(int j)
{
	currentSemester = j;
}

void Student::setPlannedSemesters(int k)
{
	plannedSemesters = k;
}

void Student::setFullInfo()
{
	cout << "Enter name: " << endl ;
	std::getline (std::cin,tempName);
	setName(tempName);
	//std::cout << "Hello, " << name << "!\n";

	cout << "Enter address: " << endl ;
	std::getline (std::cin,tempAddress);
	setAddress(tempAddress);

	cout << "Enter matriculation number: " << endl;
	cin >> tempmatrNumber;
	setMatrNumber(tempmatrNumber);

	cout << "Enter current semester: " << endl;
	cin >> tempcurrentSemester;
	setCurrentSemester(tempcurrentSemester);

	cout << "Enter planned semesters: " << endl;
	cin >> tempplannedSemesters;
	setPlannedSemesters(tempplannedSemesters);

	remainedSemesters = plannedSemesters - currentSemester;
	//cout << "The study will take " << remainedSemesters << " semester(s)" << endl;
}

string Student::getName()
{
	return name;
}

string Student::getAddress()
{
	return address;
}


int Student::getMatrNumber()
{
	return matrNumber;
}

int Student::getCurrentSemester()		//Question: Why we need "Student::" before function name. If not, "Student::" is required before variable name. eg Student::currentSemester. Why?
{
	return currentSemester;
}

int Student::getPlannedSemesters()
{
	return plannedSemesters;
};

void Student::getFullInfo()			//Question: Not clear when to require "Student::" before function/ variable. Example: below variables don't require "Student::"
{
	cout << "Student's name is: " << getName() << endl;
	cout << "Student's address is: " << getAddress() << endl;
	cout << "Student's matriculation number is: " << getMatrNumber() << endl;
	cout << "Student's current semester is: " << getCurrentSemester() << endl;
	cout << "Student's number of planned semesters is: " << getPlannedSemesters() << endl;
	cout << "Student's number of remained semesters is: " << remainedSemesters << endl;
}

// Need to edit: set function need argument. Ex: setName(string s) .
// Then input can be parsed from keyboard to that argument.
