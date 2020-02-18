#pragma once
#include <string>
#include <vector>

struct Course
{
	int courseID;
	string name;
	int hours;
	char grade;
};

struct Student
{
	int studentID;
	string fName;
	string lName;
	string email;
	string phone;
	float gpa;
	vector<Course> courses;
};

void displayStudent(Student&);
void displayCourse(Course&);
void displayAllStudents(vector<Student>);