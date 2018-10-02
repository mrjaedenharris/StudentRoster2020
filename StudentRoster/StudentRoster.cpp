// StudentRoster.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include "pch.h"
#include "Student.h"
#include "SecurityStudent.h"
#include "NetworkStudent.h"
#include "SoftwareStudent.h"
#include <iostream>

int main()
{

	const std::string studentData[] =
	{ "A1,John,Smith,John1989@gmail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Jaeden,Harris,mr.jaeden.harris@gmail.com,25,30,30,45,SOFTWARE" };
	
	SecurityStudent John(1, "John", "Smith", "John1989@gm ail.com",20, 30, 35, 40);
	NetworkStudent Suzan(2, "Suzan", "Erickson", "Erickson_1990@gmail.com", 19, 50, 30, 40);
	SoftwareStudent Jack(3, "Jack", "Napoli", "The_lawyer99@yahoo.com", 19, 20, 40, 33);
	

	//Jaeden.SetDegreeType();
	//Jaeden.GetDegreeProgram();
	John.PrintData();
	Suzan.PrintData();
	Jack.PrintData();
	
	return 0;
}
