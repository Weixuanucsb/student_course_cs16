#include "reverse_course_list.h"

// tests that reverse works for an empty student list, a single-element list 
// of students, and a multi-element list of students
void reverse_course_list_tests() {
    Course *c = new Course;
    c->head = NULL;
    c->tail = NULL;

    reverse_course_list(c); // reverse empty list
    assert(c->head == NULL && c->tail == NULL); 

    Student* s1 = new Student;
    s1->next = NULL;
    c->head = s1;
    c->tail = s1;

    reverse_course_list(c); // reverse single-element list
    assert(c->head == s1 && c->tail == s1);
    assert(s1->next == NULL);

    Student* s2 = new Student;
    Student* s3 = new Student;
    s1->next = s2;
    s2->next = s3;
    s3->next = NULL;
    c->head = s1;
    c->tail = s3;

    reverse_course_list(c); // reverse multi-element list
    assert(c->head == s3 && c->tail == s1);
    assert(s3->next == s2);
    assert(s2->next == s1);
    assert(s1->next == NULL);
}

int main(int argc, char const *argv[])
{
    reverse_course_list_tests();
    return 0;
}