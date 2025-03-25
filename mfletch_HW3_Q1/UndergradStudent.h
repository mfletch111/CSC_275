//
// Created by marli on 3/23/2025.
//

#ifndef UNDERGRADSTUDENT_H
#define UNDERGRADSTUDENT_H
#include "Student.h"


class UndergradStudent: public Student {
public:
    UndergradStudent(); //default
    UndergradStudent(string first, string last, int year, int day, int month, string schoolName, double GPA);// constructor with parameters
    double getGPA(); //accessor
    void setGPA(double gpa); //mutator
private:
    double GPA; //added data element

};



#endif //UNDERGRADSTUDENT_H
