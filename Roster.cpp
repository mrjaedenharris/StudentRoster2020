#include "pch.h"
#include "Roster.h"
#include "Student.h"
#include "SecurityStudent.h"
#include "NetworkStudent.h"
#include "SoftwareStudent.h"
#include <iostream>
#include <sstream>
#include <vector>
#include "degree.h"
#include <cstring>
using namespace std;


Roster::Roster()
{
	Student* classRosterArray[100];

}
Roster::Roster(int random)
{

	std::string studentData[] =
	{
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5, Jaeden, Harris,mr.jaeden.harris@gmail.com, 25, 45, 60, 75, SOFTWARE"
	};

	classRosterArray[0] = new SecurityStudent();
	classRosterArray[1] = new NetworkStudent();
	classRosterArray[2] = new SoftwareStudent();
	classRosterArray[3] = new SecurityStudent();
	classRosterArray[4] = new SoftwareStudent();

	vector<std::string> student0;
	vector<std::string> student1;
	vector<std::string> student2;
	vector<std::string> student3;
	vector<std::string> student4;

	std::string tempStudentID;
	std::string token;

	std::stringstream ss0(studentData[0]);
	std::stringstream ss1(studentData[1]);
	std::stringstream ss2(studentData[2]);
	std::stringstream ss3(studentData[3]);
	std::stringstream ss4(studentData[4]);

	//parse through each line and separate by comma push the value into the vectors
	while (std::getline(ss0, token, ','))
	{
		//std::cout << token << '\n';
		student0.push_back(token);
	}

	while (std::getline(ss1, token, ','))
	{
		//std::cout << token << '\n';
		student1.push_back(token);
	}

	while (std::getline(ss2, token, ','))
	{
		//std::cout << token << '\n';
		student2.push_back(token);
	}

	while (std::getline(ss3, token, ','))
	{
		//std::cout << token << '\n';
		student3.push_back(token);
	}

	while (std::getline(ss4, token, ','))
	{
		//std::cout << token << '\n';
		student4.push_back(token);
	}

	//-------------Student 0 ---------------

	classRosterArray[0]->SetStudentID(student0[0]);
	classRosterArray[0]->SetFirstName(student0[1]);
	classRosterArray[0]->SetLastName(student0[2]);
	classRosterArray[0]->SetEmailAddress(student0[3]);

	istringstream bufferAge0(student0[4]);
	int a;
	bufferAge0 >> a;

	classRosterArray[0]->SetAge(a);

	istringstream bufferFirstCourse0(student0[5]);
	int x;
	bufferFirstCourse0 >> x;

	istringstream bufferSecondCourse0(student0[6]);
	int y;
	bufferSecondCourse0 >> y;

	istringstream bufferThirdCourse0(student0[7]);
	int z;
	bufferThirdCourse0 >> z;

	classRosterArray[0]->SetNumCourseDays(x, y, z);

	//Currently just sets as whatever the object was made as
	classRosterArray[0]->SetDegreeType();

	classRosterArray[0]->PrintData();

	//--------------Student 1 -----------------

	classRosterArray[1]->SetStudentID(student1[0]);
	classRosterArray[1]->SetFirstName(student1[1]);
	classRosterArray[1]->SetLastName(student1[2]);
	classRosterArray[1]->SetEmailAddress(student1[3]);

	istringstream bufferAge1(student1[4]);
	bufferAge1 >> a;

	classRosterArray[1]->SetAge(a);

	istringstream bufferFirstCourse1(student1[5]);
	bufferFirstCourse1 >> x;

	istringstream bufferSecondCourse1(student1[6]);
	bufferSecondCourse1 >> y;

	istringstream bufferThirdCourse1(student1[7]);
	bufferThirdCourse1 >> z;

	classRosterArray[1]->SetNumCourseDays(x, y, z);

	//Currently just sets as whatever the object was made as
	classRosterArray[1]->SetDegreeType();

	classRosterArray[1]->PrintData();

	//-------------Student 2 ---------------


	classRosterArray[2]->SetStudentID(student2[0]);
	classRosterArray[2]->SetFirstName(student2[1]);
	classRosterArray[2]->SetLastName(student2[2]);
	classRosterArray[2]->SetEmailAddress(student2[3]);

	istringstream bufferAge2(student2[4]);
	bufferAge2 >> a;

	classRosterArray[2]->SetAge(a);

	istringstream bufferFirstCourse2(student2[5]);
	bufferFirstCourse2 >> x;

	istringstream bufferSecondCourse2(student2[6]);
	bufferSecondCourse2 >> y;

	istringstream bufferThirdCourse2(student2[7]);
	bufferThirdCourse2 >> z;

	classRosterArray[2]->SetNumCourseDays(x, y, z);

	//Currently just sets as whatever the object was made as
	classRosterArray[2]->SetDegreeType();

	classRosterArray[2]->PrintData();

	//-------------Student 3 ---------------

	classRosterArray[3]->SetStudentID(student3[0]);
	classRosterArray[3]->SetFirstName(student3[1]);
	classRosterArray[3]->SetLastName(student3[2]);
	classRosterArray[3]->SetEmailAddress(student3[3]);

	istringstream bufferAge3(student3[4]);
	bufferAge3 >> a;

	classRosterArray[3]->SetAge(a);

	istringstream bufferFirstCourse3(student3[5]);
	bufferFirstCourse3 >> x;

	istringstream bufferSecondCourse3(student3[6]);
	bufferSecondCourse3 >> y;

	istringstream bufferThirdCourse3(student3[7]);
	bufferThirdCourse3 >> z;

	classRosterArray[3]->SetNumCourseDays(x, y, z);

	//Currently just sets as whatever the object was made as
	classRosterArray[3]->SetDegreeType();

	classRosterArray[3]->PrintData();

	//-------------Student 4 ---------------


	classRosterArray[4]->SetStudentID(student4[0]);
	classRosterArray[4]->SetFirstName(student4[1]);
	classRosterArray[4]->SetLastName(student4[2]);
	classRosterArray[4]->SetEmailAddress(student4[3]);

	istringstream bufferAge4(student4[4]);
	bufferAge4 >> a;

	classRosterArray[4]->SetAge(a);

	istringstream bufferFirstCourse4(student4[5]);
	bufferFirstCourse4 >> x;

	istringstream bufferSecondCourse4(student4[6]);
	bufferSecondCourse4 >> y;

	istringstream bufferThirdCourse4(student4[7]);
	bufferThirdCourse4 >> z;

	classRosterArray[4]->SetNumCourseDays(x, y, z);

	//Currently just sets as whatever the object was made as
	classRosterArray[4]->SetDegreeType();

	classRosterArray[4]->PrintData();

}

Roster::~Roster()
{
}

void Roster::AddStudent(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeType)
{
	if (degreeType = NETWORK)
	{
		classRosterArray[arrayCounter] = new NetworkStudent;
	}

	else if (degreeType = SECURITY)
	{
		classRosterArray[arrayCounter] = new SecurityStudent;
	}

	else if (degreeType = SOFTWARE)
	{
		classRosterArray[arrayCounter] = new SoftwareStudent;
	}

	classRosterArray[arrayCounter]->SetStudentID(studentID);
	classRosterArray[arrayCounter]->SetFirstName(firstName);
	classRosterArray[arrayCounter]->SetLastName(lastName);
	classRosterArray[arrayCounter]->SetEmailAddress(emailAddress);
	classRosterArray[arrayCounter]->SetAge(age);
	classRosterArray[arrayCounter]->SetNumCourseDays(daysInCourse1, daysInCourse2, daysInCourse3);
	classRosterArray[arrayCounter]->SetDegreeType();

	arrayCounter++;



	
	return;
}


void Roster::RemoveStudent(std::string studentID)
{
	bool studentFound = false;

	for (int z = 0; z < arrayCounter; z++)
	{
		
		if (classRosterArray[z]->GetStudentID() == studentID)
		{
			std::cout << endl << "Student ID: '" << studentID << "' deleted.";
			delete classRosterArray[z];
			arrayCounter--;
			studentFound = true;
		}
	}

	
	if (!studentFound)
	{
		std::cout << "Error: Student ID: '" << studentID << "' not found." << endl;
	}

	std::cout << endl;
}




void Roster::PrintAll()
{
	for (int z = 0; z < arrayCounter; z++)
	{
		std::cout << classRosterArray[z]->GetStudentID() << "\t";
		std::cout << classRosterArray[z]->GetFirstName() << "\t";
		std::cout << classRosterArray[z]->GetLastName() << "\t";
		std::cout << classRosterArray[z]->GetEmailAddress() << "\t";
		std::cout << classRosterArray[z]->GetAge() << "\t";
		std::cout << classRosterArray[z]->GetNumCourseDays().numCourseDays[0] << "\t";
		std::cout << classRosterArray[z]->GetNumCourseDays().numCourseDays[1] << "\t"; 
		std::cout << classRosterArray[z]->GetNumCourseDays().numCourseDays[2] << "\t"; 
		std::cout << classRosterArray[z]->GetEnumName(classRosterArray[z]->GetDegreeProgram());

		std::cout << endl;
	}
	return;
}

//Currently working --Tweak to look better---
void Roster::PrintDaysInCourse(string studentID)
{
	bool studentFound = false;

	for (int z = 0; z < arrayCounter; z++)
	{
		int avgDaysInCourses;

		if (classRosterArray[z]->GetStudentID() == studentID)
		{
			avgDaysInCourses = (((classRosterArray[z]->GetNumCourseDays().numCourseDays[0]) + (classRosterArray[z]->GetNumCourseDays().numCourseDays[1]) + (classRosterArray[z]->GetNumCourseDays().numCourseDays[2])) / 3);
			std::cout << endl << "Average days for student: '" << studentID << "' to complete three courses: " << avgDaysInCourses << endl;

			studentFound = true;

		}

	}

	if (!studentFound)
	{
		std::cout << endl << "Error:  Student ID: '" << studentID << "' was not found." << endl << endl;
	}
	
}

//Working Correctly
void Roster::PrintInvalidEmails()
{

	for (int z = 0; z < arrayCounter; z++)
	{
		std::string tempEmail;
		bool invalidEmail = false;

		tempEmail = classRosterArray[z]->GetEmailAddress();

		char emailCstr[30];
		strcpy_s(emailCstr, tempEmail.c_str());


		if (strchr(emailCstr, ' ') != nullptr || strchr(emailCstr, '@') == nullptr || strchr(emailCstr, '.') == nullptr)
		{

			std::cout << classRosterArray[z]->GetEmailAddress() << ": is an invalid Email address it may contain a space, or not include an '@' or '.' symbol" << endl;

		}

	}

	return;
}


//Not Currently Working
void Roster::PrintByDegreeProgram(Degree degreeProgram)
{
	for (int z = 0; z < arrayCounter; z++)
	{
		if (classRosterArray[z]->GetDegreeProgram() == degreeProgram)
		{
			std::cout << endl << classRosterArray[z]->GetStudentID() << "\t";
			std::cout << classRosterArray[z]->GetFirstName() << "\t";
			std::cout << classRosterArray[z]->GetLastName() << "\t";
			std::cout << classRosterArray[z]->GetEmailAddress() << "\t";
			std::cout << classRosterArray[z]->GetAge() << "\t";
			std::cout << classRosterArray[z]->GetNumCourseDays().numCourseDays[0] << "\t";
			std::cout << classRosterArray[z]->GetNumCourseDays().numCourseDays[1] << "\t";
			std::cout << classRosterArray[z]->GetNumCourseDays().numCourseDays[2] << "\t";
			std::cout << classRosterArray[z]->GetEnumName(classRosterArray[z]->GetDegreeProgram()) << "\t";
			std::cout << endl;
		}
		

	}
	return;
}

int main() {

	//-----Main Portion of Assignment-----

	std::cout << "Course Title: Scripting and Programming Applications" << endl;
	std::cout << "Programming Language: C++" << endl;
	std::cout << "Student ID: -fill me in-" << endl;
	std::cout << "Student Name: Jaeden Harris" << endl << endl;

	Roster* classRoster[50];

	/*
	classRoster[0] = new Roster(5);

	classRoster[0]->AddStudent("A6", "George", "Groesbeck", "George.Groesbeck@emc.com", 27, 35, 40, 65, SECURITY);
	
	//Tests on Print Days in Course
	classRoster[0]->PrintDaysInCourse("B1");
	classRoster[0]->PrintDaysInCourse("A1");
	classRoster[0]->PrintDaysInCourse("A2");
	classRoster[0]->PrintDaysInCourse("A3");
	classRoster[0]->PrintDaysInCourse("A4");
	classRoster[0]->PrintDaysInCourse("A5");
	classRoster[0]->PrintDaysInCourse("A6");
	classRoster[0]->PrintDaysInCourse("A7");

	classRoster[0]->PrintInvalidEmails();

	//classRoster[0]->RemoveStudent("A4");
	classRoster[0]->RemoveStudent("A6");
	classRoster[0]->RemoveStudent("A7");

	classRoster[0]->PrintAll();

	classRoster[0]->PrintByDegreeProgram(SECURITY);
	classRoster[0]->PrintByDegreeProgram(NETWORK);
	classRoster[0]->PrintByDegreeProgram(SOFTWARE);

	*/



	//-------SECONDARY PORTION OF ASSIGNMENT-------

	classRoster[0] = new Roster();

	classRoster[0]->AddStudent("A1", "John", "Smith", "John1989@gm ail.com", 20, 30, 35, 40, SECURITY);
	classRoster[0]->AddStudent("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
	classRoster[0]->PrintInvalidEmails();
	classRoster[0]->PrintDaysInCourse("A2");
	classRoster[0]->PrintAll();


	return 0;
}


