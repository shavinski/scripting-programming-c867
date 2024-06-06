#include "Roster.h"
#include "Degree.h"
#include "Student.h"
#include <iostream>

// ------------ constructor ----------------------
Roster::Roster()
{
}

// Add/remove methods for roster
void Roster::add(std::string student_id, std::string first_name, std::string last_name,
                 std::string email, int age, int days_course1, int days_course2,
                 int days_Course3, DegreeProgram degree_program)
{
    Student *newly_created_student = new Student(student_id, first_name, last_name, email, age, days_course1, days_course2, days_Course3, degree_program);
    class_roster_array[roster_position] = newly_created_student;
    roster_position++;
}

void Roster::remove(std::string student_id) {
    
}

// Print methods for roster