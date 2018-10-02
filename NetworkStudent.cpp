#include "pch.h"
#include "NetworkStudent.h"
#include <string>


NetworkStudent::NetworkStudent()
{
}

NetworkStudent::NetworkStudent(std::string newStudentID, std::string newFirstName, std::string newLastName, std::string newEmailAddress, int newAge, int firstCourseNumDays, int secondCourseNumDays, int thirdCourseNumDays)
{
	SetStudentID(newStudentID);
	SetFirstName(newFirstName);
	SetLastName(newLastName);
	SetEmailAddress(newEmailAddress);
	SetAge(newAge);
	SetNumCourseDays(firstCourseNumDays, secondCourseNumDays, thirdCourseNumDays);
	degreeTypes = NETWORK;
}

NetworkStudent::~NetworkStudent()
{
}

std::string NetworkStudent::GetEnumName(enum Degree degreeType)
{
	switch (degreeType)
	{
	case NETWORK: return "Networking Student";
	case SECURITY: return "Security Student";
	case SOFTWARE: return "Software Student";

	}
}

void NetworkStudent::SetDegreeType()
{
	degreeTypes = NETWORK;
}

Degree NetworkStudent::GetDegreeProgram()
{
	std::cout << degreeTypes;
	return degreeTypes;
}

void NetworkStudent::PrintData()
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

