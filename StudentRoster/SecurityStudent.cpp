#include "pch.h"
#include "SecurityStudent.h"
#include <iostream>
#include <string>


SecurityStudent::SecurityStudent()
{
}

SecurityStudent::SecurityStudent(int newStudentID, std::string newFirstName, std::string newLastName, std::string newEmailAddress, int newAge, int firstCourseNumDays, int secondCourseNumDays, int thirdCourseNumDays)
{
	SetStudentID(newStudentID);
	SetFirstName(newFirstName);
	SetLastName(newLastName);
	SetEmailAddress(newEmailAddress);
	SetAge(newAge);
	SetNumCourseDays(firstCourseNumDays, secondCourseNumDays, thirdCourseNumDays);
	degreeTypes = DT_SECURITY;
}

SecurityStudent::~SecurityStudent()
{
}

std::string SecurityStudent::GetEnumName(enum Degree degreeType)
{
	switch (degreeType)
	{
	    case DT_NETWORKING: return "Networking Student";
		case DT_SECURITY: return "Security Student";
		case DT_SOFTWARE: return "Software Student";
		case DT_NONE: return "No Degree Assigned";

	}
}


void SecurityStudent::SetDegreeType()
{
    degreeTypes = DT_SECURITY;
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
