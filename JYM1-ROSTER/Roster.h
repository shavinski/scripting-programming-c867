#ifndef ROSTER_H
#define ROSTER_H

#include <string>
#include "Degree.h"
#include "Student.h"

class Roster
{
private:
    // All private Roster variables
    Student *class_roster_array[5]{nullptr};
    int roster_position{0};

public:
    // Constructor all input params
    Roster();

    // Add/remove methods for roster
    void add(std::string studentID, std::string firstName, std::string lastName,
             std::string emailAddress, int age, int daysInCourse1, int daysInCourse2,
             int daysInCourse3, DegreeProgram degreeProgram);
    void remove(std::string student_id);

    // Print methods for roster
    void printAll();
    void printAverageDaysInCourse(std::string student_id);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degree_program);
};

#endif