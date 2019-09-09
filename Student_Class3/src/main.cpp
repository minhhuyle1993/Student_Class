/*
 * main.cpp
 *
 *  Created on: Sep 8, 2019
 *      Author: Huy
 */

#include <iostream>
#include <stdio.h>
using namespace std;

class Student
{
	private:
		char name[50];
		char address[200];
		int matrNumber;
		int currentSemester;
		int plannedSemesters;
	public:
		int remainedSemesters;
		void setName();
		void setAddress();
		void setMatrNumber();
		void setCurrentSemester();
		void setPlannedSemesters();
		void setFullInfo();

		char getName();
		char getAddress();
		int getMatrNumber();
		int getCurrentSemester();
		int getPlannedSemesters();
};

void Student::setName(void)
{
	cout << "Enter name: " << endl;
	gets(name); //To include spaces in the input
	//cin >> name;
	cout <<"Student's name is " <<name << endl;
}

void Student::setAddress(void)
{
	cout << "Enter address: " << endl ;
	gets(address);	//To include spaces in the input
	//cin >> address;
	cout <<"Student's address is " <<address << endl;
}

void Student::setMatrNumber(void)
{
	cout << "Enter matriculation number: " << endl;
	cin >> matrNumber;
	cout <<"Student's matriculation number is " <<matrNumber << endl;
}

void Student::setCurrentSemester(void)
{
	cout << "Enter current semester: " << endl;
	cin >> currentSemester;
	cout <<"Student's current semester is " <<currentSemester << endl;
}

void Student::setPlannedSemesters(void)
{
	cout << "Enter planned semester: " << endl;
	cin >> plannedSemesters;
	cout <<"Student's planned semesters is " <<plannedSemesters << endl;
}

void Student::setFullInfo()
{
	setName();
	setAddress();
	setMatrNumber();
	setCurrentSemester();
	setPlannedSemesters();
	remainedSemesters = plannedSemesters - currentSemester;
	cout << "The study will take " << remainedSemesters << " semester(s)" << endl;
}

/*char getName()
{
	return name;
}

char getAddress()
{
	return address;
}


int getMatrNumber()
{
	return matrNumber;
}

int getCurrentSemester()
{
	return currentSemester;
}

int getPlannedSemesters()
{
	return plannedSemesters;
};*/



int main(int argc, char* argv[]) {

int i;

	Student myStudent1, myStudent2;
	myStudent1.setFullInfo();
	myStudent2.setFullInfo();
	//myStudent.setCurrentSemester();


/*for (i = 1; i < 10; i++)
{
	j = i*i;
	cout << i << " * " << i << " = " << j << endl;
}*/
}



