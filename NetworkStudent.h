#pragma once
#include "Student.h"
#include "Degree.h"

class NetworkStudent : public Student
{
public:
	
	
	NetworkStudent();

	NetworkStudent(std::string newStudentID, std::string newFirstName, std::string newLastName, std::string newEmailAddress, int newAge, int firstCourseNumDays, int secondCourseNumDays, int thirdCourseNumDays);

	~NetworkStudent();

	std::string GetEnumName(enum Degree degreeType);
	
	void SetDegreeType();
	Degree GetDegreeProgram();

	void PrintData();

private:

	Degree degreeTypes;
};

