//
// Created by marli on 3/23/2025.
//

#ifndef GRADSTUDENT_H
#define GRADSTUDENT_H
#include "Student.h"


class GradStudent: public Student {
public:
    GradStudent(); //default constructor
    GradStudent(string first, string last, int year, int day, int month, string schoolName, int credits); //declaration for constructor with parameters
    int getCredits(); //accessor
    void setCredits(int credits); //mutator


private:
    int credits;// added data element

};



#endif //GRADSTUDENT_H
