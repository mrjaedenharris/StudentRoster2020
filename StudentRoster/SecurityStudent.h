#pragma once
#include "Student.h"
class SecurityStudent : public Student
{
public:
	
	SecurityStudent();

	SecurityStudent(int newStudentID, std::string newFirstName, std::string newLastName, std::string newEmailAddress, int newAge, int firstCourseNumDays, int secondCourseNumDays, int thirdCourseNumDays);
	
	//SecurityStudent() : Student()
	//SecurityStudent() : Student(int newStudentID, std::string newFirstName, std::string newLastName, std::string newEmailAddress, int newAge, int firstCourseNumDays, int secondCourseNumDays, int thirdCourseNumDays){}; -using non-default base class during instantiation-

	~SecurityStudent();
	
	std::string GetEnumName(enum Degree degreeType);

	void SetDegreeType();
	Degree GetDegreeProgram();

	void PrintData();

private:


};

