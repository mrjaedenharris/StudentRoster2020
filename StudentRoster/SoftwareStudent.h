#pragma once
#include "Student.h"
class SoftwareStudent :
	public Student
{
public:
	
	SoftwareStudent();

	SoftwareStudent(int newStudentID, std::string newFirstName, std::string newLastName, std::string newEmailAddress, int newAge, int firstCourseNumDays, int secondCourseNumDays, int thirdCourseNumDays);

	~SoftwareStudent();

	std::string GetEnumName(enum Degree degreeType);
	
	void SetDegreeType();
	Degree GetDegreeProgram();

	void PrintData();

private:

};

