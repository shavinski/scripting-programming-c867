#include "Student.h"
#include "Degree.h"

Student::Student(std::string student_id,
                 std::string first_name,
                 std::string last_name,
                 std::string email,
                 int age,
                 int *num_days,
                 DegreeProgram degree_program)
{
    this->student_id = student_id;
    this->first_name = first_name;
    this->last_name = last_name;
    this->email = email;
    this->age = age;
    this->num_days = num_days;
    this->degree_program = degree_program;
}

std::string Student::get_student_id() const
{
    return student_id;
}

std::string Student::get_first_name() const
{
    return first_name;
}

std::string Student::get_last_name() const
{
    return last_name;
}

std::string Student::get_email() const
{
    return email;
}

int Student::get_age() const
{
    return age;
}

int *Student::get_num_days() const
{
    return num_days;
}
