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

void Roster::remove(std::string student_id)
{
    for (size_t i = 0; i < 5; i++)
    {
        if (class_roster_array[i]->get_student_id() == student_id)
        {
            class_roster_array[i] = nullptr;
        }
    }
    std::cout << "Student not found: " << student_id << std::endl;
}

// Print methods for roster
void Roster::printAll()
{
    for (size_t i = 0; i < 5; i++)
    {
        class_roster_array[i]->print();
    }
}

void Roster::printAverageDaysInCourse(std::string student_id)
{
    for (size_t i = 0; i < 5; i++)
    {
        if (class_roster_array[i]->get_student_id() == student_id)
        {
            int first_course_days = class_roster_array[i]->get_num_days(0);
            int second_course_days = class_roster_array[i]->get_num_days(1);
            int third_course_days = class_roster_array[i]->get_num_days(2);

            int sum = first_course_days + second_course_days + third_course_days;

            std::cout << "Average days in course:" << sum / 3 << std::endl;
        }
    }
}