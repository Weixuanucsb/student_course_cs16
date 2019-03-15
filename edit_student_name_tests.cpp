#include "edit_student_name.h"

#include <iostream>
using namespace std;

// Tests that verify that the edit_student_name works for an empty student list,
// a single-element list that matches the student ID
// a single-element list that doesn't match the student ID
// a multi-element list that matches student ID for students that are not listed first

void print_result(int result)
    // Given a value of the result, print the appropriate message
{
   if (result != 0)
    {
        cout << "Unable to find the student with the given id" << endl;
    }
    else
    {
        cout << "Successfully updated the student name." << endl;
    }
}

int main() {
    int result = -99; // holds the result of the function execution
    Course *c = new Course;
    c->head = NULL;
    c->tail = NULL;

    result = edit_student_name( c->head, 42, "Arpit", "Fei");
    print_result(result);

    Student* s1 = new Student;
    s1->next = NULL;

    // add the new student to the list
    c->head = new Student;
    c->head->first_name = "Yufei";
    c->head->last_name = "Gupta";
    c->head->id = 42;
    c->head->next = NULL;

    // since it's the first element, tail points at the first student
    c->tail = c->head;

    // edit the first student
    result = edit_student_name( c->head, 42, "Arpit", "Fei");
    print_result(result);

    return 0;
}
