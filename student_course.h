#ifndef STUDENTCOURSE_H 
#define  STUDENTCOURSE_H
#include <string>
using namespace std;

struct Student{
    int id;
    string first_name;
    string last_name;
    Student* next;
};

struct Course{
    Student *head;
    Student *tail;
};
#endif
