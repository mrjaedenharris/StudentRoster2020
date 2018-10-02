#pragma once

//enum encapsulation to hold our Degree types
enum Degree
{
	NETWORK,
	SECURITY,
	SOFTWARE,
};

//Encapsulate in a struct our course days array for three courses
struct Courses
{
	int numCourseDays[3];
};