#include "student_course.h"

#include <iostream>
#include <string>

// Precondition: We are given a (possibly) empty list of students, each student with a unique ID, and a student ID which doesn't necessarily correspond to a student in the list.
// Postcondition: If the student with the given ID exists in the list, that student will be removed.
int remove_student_by_id(Course* course_list, int student_id) {
	// If the list is empty
	if (course_list -> head == NULL) {
		return 0;
	}
	Student* iter = course_list -> head;
	// If the student is at the beginning of the list
	if (iter -> id == student_id) {
		course_list -> head = iter -> next;
		delete iter;
		return 1;
	}
	Student* discard;
	// If the student is in the middle of the list
	while (iter -> next != NULL) {
		if (iter -> next -> id == student_id) {
			discard = iter -> next;
			iter -> next = iter -> next -> next;
			delete discard;
			return 1;
		}
	}
	// If the student is at the end of the list
	if (course_list -> tail -> id == student_id) {
		delete course_list -> tail;
		course_list -> tail = iter;
		return 1;
	}
	// If the student is not in the list
	return 0;
}
