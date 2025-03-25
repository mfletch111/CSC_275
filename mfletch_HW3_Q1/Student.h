//
// Created by marli on 3/23/2025.
//

#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
#include "Person.h"


class Student: public Person {
public:
    Student(); //default constructor
    Student(string first, string last, int year, int day, int month, string schoolName); //constructor with parameters
    string getScoolName(); //accessor
    void setScoolName(string schoolName); //mutator


private:
    string schoolName; //added data element

};



#endif //STUDENT_H
