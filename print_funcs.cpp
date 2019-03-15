#include <iostream>
#include <string>
#include "student_course.h"

using namespace std;

void print_student(Student *std_ptr)
{
	// if pointer is NULL print the student is not present
	if(std_ptr == NULL)
	{
		cout << "No student present." << endl;
	}	

	cout << "Id: " << std_ptr -> id << ", First Name: " << std_ptr -> first_name << ", End Name: " << std_ptr -> last_name << endl;

}
void print_course(Course *course_ptr)
{
	if(course_ptr == NULL)
	{
		cout << "No course is present." << endl;
	}
	Student *std_ptr = course_ptr -> head;
	if(std_ptr != NULL)
	{
		cout << "Printing students in the course." << endl;
	}
	else
	{
		cout << "No students in the course." << endl;
	}
	while(std_ptr != NULL)
	{
		print_student(std_ptr);
		std_ptr = std_ptr -> next;
	}
}