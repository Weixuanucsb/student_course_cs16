#include "student_course.h"

#include <iostream>
#include <string>

bool string_compare(string s1, string s2){
    int len1 = s1.length();
    int len2 = s2.length();
    int len;
    bool flag = true;

    if (len1 < len2)
        len = len1;
    else
        len = len2;
    
    for (int i = 0; i < len; i++){
        if (s1[i] < s2[i])
            flag = true;
        else
            flag = false;
    }

    return flag;
}

void add_stduent_by_name(Course* course_list, string student_id, string first_name, string last_name){
    Student* tmp = course_list -> head;
    
    while(tmp->next != NULL){
        

    }
}

int main(){
    Student* std_1 = new Student;
    std_1 -> id = 1;
    std_1 -> first_name = "Cai";
    std_1 -> last_name = "Ma";
    std_1 -> next = std_2;

    Student* std_2 = new Student;
    std_2 -> id = 3;
    std_2 -> first_name = "Ravi";
    std_2 -> last_name = "Taj";
    std_2 -> next = std_3;
    
    Student* std_3 = new Student;
    std_1 -> id = 4;
    std_1 -> first_name = "Nassim";
    std_1 -> last_name = "Mafi";
    std_1 -> next = NULL;

    int student_id = 2;
    string add_first_name = "Tao";
    string add_last_name = "Yang";


      

}