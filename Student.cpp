#include "pch.h"
#include "Student.h"
#include <iostream>


Student::Student()
{
}


Student::Student(int newStudentID, std::string newFirstName, std::string newLastName, std::string newEmailAddress, int newAge, int firstCourseNumDays, int secondCourseNumDays, int thirdCourseNumDays)
{
	studentID = newStudentID;
	firstName = newFirstName;
	lastName = newLastName;
	emailAddress = newEmailAddress;
	age = newAge;
	arrayOfCourses.numCourseDays[0] = firstCourseNumDays;
	arrayOfCourses.numCourseDays[1] = secondCourseNumDays;
	arrayOfCourses.numCourseDays[2] = thirdCourseNumDays;
	
}


Student::~Student()
{
}

std::string Student::GetStudentID()
{
	return studentID;
}

void Student::SetStudentID(std::string newStudentID)
{
	studentID = newStudentID;
	return;
}

std::string Student::GetFirstName()
{
	return firstName;
}

void Student::SetFirstName(std::string newFirstName)
{
	firstName = newFirstName;
	return;
}

std::string Student::GetLastName()
{
	return lastName;
}

void Student::SetLastName(std::string newLastName)
{
	lastName = newLastName;
	return;
}

std::string Student::GetEmailAddress()
{
	return emailAddress;
}

void Student::SetEmailAddress(std::string newEmailAddress)
{
	emailAddress = newEmailAddress;
	return;
}

int Student::GetAge()
{
	return age;
}

void Student::SetAge(int newAge)
{
	age = newAge;
	return;
}


Courses Student::GetNumCourseDays()
{
    return arrayOfCourses; //Returns struct of array
}

void Student::SetNumCourseDays(int firstCourseTime, int secondCourseTime, int thirdCourseTime)
{
	arrayOfCourses.numCourseDays[0] = firstCourseTime;
	arrayOfCourses.numCourseDays[1] = secondCourseTime;
	arrayOfCourses.numCourseDays[2] = thirdCourseTime;
	return;
}

void Student::PrintData()
{
	return;
}
