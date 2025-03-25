//
// Created by marli on 3/23/2025.
//

#include "Student.h"

Student::Student(): Person(), schoolName("") {} //default constructor definition
Student::Student(string first, string last, int year, int day, int month, string schoolName)
: Person(first,last,year,day,month), schoolName(schoolName) {} //constrcutor with parameters definition


string Student::getScoolName() { //acessor function
    return schoolName;
}

void Student::setScoolName(string schoolName){ //mutator function
        this->schoolName = schoolName;
}

