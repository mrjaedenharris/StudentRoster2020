#pragma once
#include <iostream>
#include "student.h"
#include "SecurityStudent.h"
#include "NetworkStudent.h"


class Roster
{
public:
	Roster();
	Roster(int random);
	
	~Roster();

	//Adds student to roster
	void AddStudent(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreetype);
	
	//Removes student from roster
	void RemoveStudent(std::string studentID);

	//Print all data tab separated
	void PrintAll();

	//Print one student's average days in courses
	void PrintDaysInCourse(std::string studentID);

	//Print all student's average days in courses
	void PrintAllDaysInCourses();

	//String search to find invalid emails
	void PrintInvalidEmails();

	//Print all students by a specific degreeProgram
	void PrintByDegreeProgram(Degree degreeProgram);

	//Return current size of array
	int GetArrayCounter();



private:
	Student* classRosterArray[100];
	Roster* classRoster[50];
	int arrayCounter;
	int classRosterCounter = 1;

	
};

