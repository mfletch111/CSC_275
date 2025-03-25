/*************************************************************************************************************
** Author     : Marlie Fletcher
** Program    : HW3, Q1
** Date Created : March 23, 2025
** Date Last Modified : March 24, 2025
*Usage          : No command line arguments
**
** Problem:
*/

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "GradStudent.h"
#include "UndergradStudent.h"

using namespace std;

int main() {
    Person p1("Tony", "Stark", 1, 21, 1950); //creating a person for Person.h
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

    Student p2("John", "Doe", 2000, 24, 3, "UofMFlint"); //creating a person for Student.h
    cout << p2.getName() << " born on: " << p2.getBirthdate() << " goes to: " << p2.getScoolName() << endl;

    GradStudent p3("Taylor", "Swift",1989,13,12,"NYU",30 ); //creating a person for GradStudent.h
    cout << p3.getName() << " born on: " << p3.getBirthdate() << " goes to: " << p3.getScoolName() << " and has " << p3.getCredits() << " credits " << endl;

    UndergradStudent p4 ("Harry", "Styles", 1994,1,2, "nowhere", 4.7); //creating a person for UndergradStudent.h
    cout << p4.getName() << " born on: " << p4.getBirthdate() << " goes to: " << p4.getScoolName() << " with a GPA of " << p4.getGPA() << endl;
    return 0;
}
