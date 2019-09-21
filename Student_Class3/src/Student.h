/*
 * Student.h
 *
 *  Created on: Sep 10, 2019
 *      Author: Huy
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <stdio.h>
#include <string>

class Student
{
	private:
		std::string name;
		std::string address;
		int matrNumber;
		int currentSemester;
		int plannedSemesters;
	public:

		std::string tempName;
		std::string tempAddress;
		int tempmatrNumber;
		int tempcurrentSemester;
		int tempplannedSemesters;


		int remainedSemesters;
		void setName(std::string s);
		void setAddress(std::string x);

		void setMatrNumber(int i);
		void setCurrentSemester(int j);
		void setPlannedSemesters(int k);
		void setFullInfo();

		std::string getName();
		std::string getAddress();
		int getMatrNumber();
		int getCurrentSemester();
		int getPlannedSemesters();
		void getFullInfo();
};

#endif /* STUDENT_H_ */
