#include <string>

struct Stduent{
    int id;
    string first_name;
    string last_name;
    Student* next;
}

struct Course{
    Student *head;
    Student *tail;
}