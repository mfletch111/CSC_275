//
// Created by marli on 3/23/2025.
//

#include "GradStudent.h"

GradStudent::GradStudent() : Student(), credits(0) {} //definition for default constructor
GradStudent::GradStudent(string first, string last, int year, int day, int month, string schoolName, int credits)
    :Student(first, last, year, day, month, schoolName), credits(credits) {} //definition for constructor with parameters



int GradStudent::getCredits() { //definition for getCredits
    return credits;
}
void GradStudent::setCredits(int credits) { //definition for setCredits
    this->credits = credits;
}

