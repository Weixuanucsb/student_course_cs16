#include "edit_student_name.h"
#include <iostream>
using namespace std;

int edit_student_name (Student* s, const int& id, const string& fname, const string& lname)
/* Precondition: course has at least one student, so s points at the first student.
   Postcondition: the function returns 0 if the student whose id was given
                  was found and their name was upated to fname, lname.
                  The function returns -1 if the student is not found 
                  (id is not in the course list.)
                  The function returns 1 if there are no students on the list.
*/
{
    if (s == NULL) {
        cout << "Attempting to edit a student in an empty course list!\n";
        //exit (1);
        return 1;
    }

    // a pointer to keep track of the current student we are looking at
    Student* curr = NULL;

    for (curr = s; curr != NULL; curr = curr->next)
    {
        // edit the student when the ID matches
        cout << curr->first_name << " " << curr->last_name << endl;
        cout << "ID: " << curr->id << endl;
        if (curr->id == id)
        {
            // Debugging output
            cout << "Changing ";
            cout << curr->first_name << " " << curr->last_name;
            cout << " to ";
            cout << fname << " " << lname << endl;
            curr->first_name = fname;
            curr->last_name = lname;
            return 0;
        }
    }

    // if we got here, the student is not found
    return -1;
}
