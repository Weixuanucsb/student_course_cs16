#include "reverse_course_list.h"

// Precondition: We are given a Course, possibly with no Students inside
// Postcondition: The list of Students inside the Course is reversed, and 
//                the head and tail of the course list are reset to the 
//                correct Students
void reverse_course_list(Course *course_list) {
    // the new tail will be the old head
    Student *new_tail = course_list->head;
    // reverse the list and get the new head
    Student *new_head = reverse_course_list_helper(course_list->head);
    // reset the head and tail
    course_list->head = new_head;
    course_list->tail = new_tail;
}

// Precondition: We are given a (possibly empty) list of Students
// Postcondition: The list pointed to by head is reversed, and a pointer to the new head is returned
Student* reverse_course_list_helper(Student *head) {
    // base case: an empty list/a single-element is already reversed
    if (head == NULL || head->next == NULL)
        return head;

    // recursive case:
    // strategy: (1) reverse the smaller list, and then (2) put the head at the end of it
    
    // (1)
    Student *head_of_reversed_smaller_list = reverse_course_list_helper(head->next);

    // (2)
    // find the end
    Student *iter = head_of_reversed_smaller_list;
    while (iter->next != NULL)
        iter = iter->next;
    // iter points to the last element now, and iter->next is NULL
    iter->next = head;
    // head is now at the end of the list, so its next should be NULL
    head->next = NULL;

    return head_of_reversed_smaller_list;
}