#include "pch.h"
#include "SoftwareStudent.h"
#include <string>


SoftwareStudent::SoftwareStudent()
{
}


SoftwareStudent::SoftwareStudent(int newStudentID, std::string newFirstName, std::string newLastName, std::string newEmailAddress, int newAge, int firstCourseNumDays, int secondCourseNumDays, int thirdCourseNumDays)
{
	SetStudentID(newStudentID);
	SetFirstName(newFirstName);
	SetLastName(newLastName);
	SetEmailAddress(newEmailAddress);
	SetAge(newAge);
	SetNumCourseDays(firstCourseNumDays, secondCourseNumDays, thirdCourseNumDays);
	degreeTypes = DT_SOFTWARE;
};

SoftwareStudent::~SoftwareStudent()
{
}

std::string SoftwareStudent::GetEnumName(enum Degree degreeType)
{
	switch (degreeType)
	{
	case DT_NETWORKING: return "Networking Student";
	case DT_SECURITY: return "Security Student";
	case DT_SOFTWARE: return "Software Student";
	case DT_NONE: return "No Degree Assigned";

	}
}



void SoftwareStudent::SetDegreeType()
{
	degreeTypes = DT_SOFTWARE;
}

Degree SoftwareStudent::GetDegreeProgram()
{
	std::cout << degreeTypes;
	return degreeTypes;
}

void SoftwareStudent::PrintData()
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
		
