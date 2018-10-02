#include "pch.h"
#include "SecurityStudent.h"
#include <iostream>
#include <string>


SecurityStudent::SecurityStudent()
{
}

SecurityStudent::SecurityStudent(std::string newStudentID, std::string newFirstName, std::string newLastName, std::string newEmailAddress, int newAge, int firstCourseNumDays, int secondCourseNumDays, int thirdCourseNumDays)
{
	SetStudentID(newStudentID);
	SetFirstName(newFirstName);
	SetLastName(newLastName);
	SetEmailAddress(newEmailAddress);
	SetAge(newAge);
	SetNumCourseDays(firstCourseNumDays, secondCourseNumDays, thirdCourseNumDays);
	degreeTypes = SECURITY;
}

SecurityStudent::~SecurityStudent()
{
}

std::string SecurityStudent::GetEnumName(enum Degree degreeType)
{
	switch (degreeType)
	{
	    case NETWORK: return "Networking Student";
		case SECURITY: return "Security Student";
		case SOFTWARE: return "Software Student";

	}
}


void SecurityStudent::SetDegreeType()
{
    degreeTypes = SECURITY;
}

Degree SecurityStudent::GetDegreeProgram()
{
	return degreeTypes;
}

void SecurityStudent::PrintData()
{
	std::cout << GetStudentID() << " ";
	std::cout << GetFirstName() << " ";
	std::cout << GetLastName() << " ";
	std::cout << GetEmailAddress() << " ";
	std::cout << GetAge() << " ";
	std::cout << GetNumCourseDays().numCourseDays[0] << " ";
	std::cout << GetNumCourseDays().numCourseDays[1] << " ";
	std::cout << GetNumCourseDays().numCourseDays[2] << " ";
	std::cout << GetEnumName(degreeTypes) << std::endl;
	
	return;
};
