#include <string>
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
