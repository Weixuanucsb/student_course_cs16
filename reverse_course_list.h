#ifndef REVERSE_COURSE_LIST_H
#define REVERSE_COURSE_LIST_H
#include <cassert>
#include "student_course.h"

void reverse_course_list(Course *course_list);
Student* reverse_course_list_helper(Student *head);
void reverse_couse_list_tests();
#endif
