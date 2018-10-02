#pragma once
#include <iostream>
#include "Degree.h"

class Student
{
public:
	Student();
    Student(int newStudentID, std::string newFirstName, std::string newLastName, std::string newEmailAddress, int newAge, int firstCourseNumDays, int secondCourseNumDays, int thirdCourseNumDays);
	
	~Student();

	std::string GetStudentID();
	void SetStudentID(std::string newStudentID);

	std::string GetFirstName();
	void SetFirstName(std::string newFirstName);

	std::string GetLastName();
	void SetLastName(std::string newLastName);

	std::string GetEmailAddress();
	void SetEmailAddress(std::string newEmailAddress);

	int GetAge();
	void SetAge(int newAge);

	Courses GetNumCourseDays();
	void SetNumCourseDays(int firstCourseNumDays, int secondCourseNumDays, int thirdCourseNumDays);

	virtual void PrintData() = 0;
	virtual std::string GetEnumName(enum Degree degreeType) = 0;
	virtual void SetDegreeType() = 0;
	virtual Degree GetDegreeProgram() = 0;

protected:

	Degree degreeTypes;

private:

	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	Courses arrayOfCourses;
	//int numCourseDays[3];

};

