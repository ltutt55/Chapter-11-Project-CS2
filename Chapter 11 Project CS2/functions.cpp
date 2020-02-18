#include "functions.h"
#include <iostream>

using namespace std;

void displayStudent(Student& student)
{
	cout << "Student Information" << endl;
	cout << "ID: " << student.studentID << endl;
	cout << "Name: " << student.lName << ", " << student.fName << endl;
	cout << "Email: " << student.email << endl;
	cout << "Phone: " << student.phone << endl;
	cout << "GPA: " << endl; //write calculate GPA function 
} 



void displayCourse(Course& course)
{
	cout << "ID: " << course.courseID << endl;
	cout << "Name: " << course.name << endl;
	cout << "Hours: " << course.hours << endl;
	cout << "Grade: " << course.grade << endl;
}

void displayAllStudents(vector<Student> studentList)
{
	for (Student student : studentList)
	{
		displayStudent(student);
	}
	

}