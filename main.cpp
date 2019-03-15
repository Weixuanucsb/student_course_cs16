#include "student_course.h"

#include <iostream>
#include <string>

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
            return 1
        else
            return -1;
    }

    if (len1 == len2 && len == len2)
        return 0;
}

void add_student_by_name(Course* course_list, string student_id, string first_name, string last_name){

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

int main(){
    Student* std_1 = new Student;
    std_1->id = 1;
    std_1->first_name = "Cai";
    std_1->last_name = "Ma";
    std_1->next = std_3;

    Student* std_3 = new Student;
    std_3->id = 3;
    std_3->first_name = "Ravi";
    std_3->last_name = "Taj";
    std_3->next = std_4;
    
    Student* std_4 = new Student;
    std_4->id = 4;
    std_4->first_name = "Nassim";
    std_4->last_name = "Mafi";
    std_4->next = NULL;

    int student_id = 2;
    string add_first_name = "Tao";
    string add_last_name = "Yang";

    Course *course_list = new Course;
    course_list->head = std_1;
    course_list->tail = std_4;

    add_student_by_name(course_list, add_first_name, add_last_name);

}