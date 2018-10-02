#pragma once
#include <iostream>



class Roster
{
public:
	Roster();
	~Roster();

	//Adds student to roster
	void AddStudent(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3);

	//Removes student from roster
	void RemoveStudent(std::string studentID);

private:

	std::string*  classRosterArray;

	const std::string studentData[100] =

	{
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Jaeden,Harris,mr.jaeden.harris@gmail.com,25,35,40,45,SOFTWARE"
	};

};

