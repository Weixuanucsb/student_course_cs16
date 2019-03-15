#include "student_course.h"

#include <iostream>
#include <string>

using namespace std;

bool string_compare(string s1, string s2){
    int len1 = s1.length();
    int len2 = s2.length();
    int len;
    // return 0 if string1 == string2
    // return 1 if string1 > string2
    // return -1 if string1 < string2

    if (len1 < len2)
        len = len1;
    else
        len = len2;

    for (int i = 0; i < len; i++){
        if (s1[i] == s2[i])
            continue;
        if (s1[i] < s2[i])
            return 1;
        else
            return -1;
    }

    if (len1 == len2 && len == len2)
        return 0;
}

void add_student_by_name(Course* course_list, int student_id, string first_name, string last_name){

    Student* tmp = course_list -> head;
    Student* pre = NULL;

    Student *newNode = new Student;
    newNode->id = student_id;
    newNode-> first_name = first_name;
    newNode-> last_name = last_name;
    newNode-> next = NULL;
    
    while(tmp->next != NULL){
        if (string_compare(last_name, tmp -> last_name) == 0)
        {
            if (string_compare(first_name, tmp->first_name) <= 0)
            {
                newNode-> next = tmp;
                if (pre == NULL)
                    course_list -> head = newNode;
                else
                    pre -> next = newNode;
            }
            else{
                tmp = tmp -> next;
                pre = tmp;
            }
        }
        else if (string_compare(last_name, tmp -> last_name) == -1){
            if (pre == NULL)
                    course_list -> head = newNode;
                else
                    pre -> next = newNode;
        }else{
            tmp = tmp -> next;
            pre = tmp;
        }
    }
}

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



int main(){
    Student* std_1 = new Student;
    std_1->id = 1;
    std_1->first_name = "Cai";
    std_1->last_name = "Ma";
    

    Student* std_3 = new Student;
    std_3->id = 3;
    std_3->first_name = "Ravi";
    std_3->last_name = "Taj";
    std_1->next = std_3;
    
    Student* std_4 = new Student;
    std_4->id = 4;
    std_4->first_name = "Nassim";
    std_4->last_name = "Mafi";
    std_3->next = std_4;

    std_4->next = NULL;

    int add_student_id = 2;
    string add_first_name = "Tao";
    string add_last_name = "Yang";

    Course *course_list = new Course;
    course_list->head = std_1;
    course_list->tail = std_4;

    add_student_by_name(course_list, add_student_id, add_first_name, add_last_name);
	print_student(std_1);
	print_course(course_list);
}
