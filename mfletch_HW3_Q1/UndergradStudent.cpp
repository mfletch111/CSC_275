//
// Created by marli on 3/23/2025.
//

#include "UndergradStudent.h"

UndergradStudent::UndergradStudent() : Student(), GPA(0.0) {} //definition fo default constructor
UndergradStudent::UndergradStudent(string first, string last, int year, int day, int month, string schoolName, double GPA)
    : Student(first, last, year, day, month, schoolName), GPA(GPA) {} //definition fo constructor with parameters


double UndergradStudent::getGPA() { //acessor function definition
    return GPA;
}
void UndergradStudent::setGPA(double GPA) { //mutator function definition
    this->GPA = GPA;
}

