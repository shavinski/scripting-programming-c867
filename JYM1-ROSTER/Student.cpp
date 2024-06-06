#include "Student.h"
#include "Degree.h"
#include <iostream>

// ------------ constructor ----------------------
Student::Student(std::string student_id,
                 std::string first_name,
                 std::string last_name,
                 std::string email,
                 int age,
                 int first_course,
                 int second_course,
                 int third_course,
                 DegreeProgram degree_program)
{
    this->student_id = student_id;
    this->first_name = first_name;
    this->last_name = last_name;
    this->email = email;
    this->age = age;
    this->num_days[0] = first_course;
    this->num_days[1] = second_course;
    this->num_days[2] = third_course;
    this->degree_program = degree_program;
}

// ------------ Getter Methods ----------------------
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

int Student::get_num_days(int position) const
{
    return num_days[position];
}

std::string Student::get_degree_program() const
{
    if (this->degree_program == SECURITY)
    {
        return "Security";
    }
    else if (this->degree_program == NETWORK)
    {
        return "Network";
    }
    else if (this->degree_program == SOFTWARE)
    {
        return "Software";
    }

    return "NONE";
}

// ------------ Setter Methods ----------------------
void Student::set_student_id(std::string student_id)
{
    this->student_id = student_id;
}

void Student::set_first_name(std::string first_name)
{
    this->first_name = first_name;
}

void Student::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}

void Student::set_email(std::string email)
{
    this->email = email;
}

void Student::set_age(int age)
{
    this->age = age;
}

void Student::set_num_days(int value, int position)
{
    num_days[position] = value;
}

void Student::set_degree_program(DegreeProgram degree_program)
{
    this->degree_program = degree_program;
}

// ------------ Additional Methods ----------------------
void Student::print() const
{
    std::cout << student_id << "    ";
    std::cout << "First Name: " << first_name << "    ";
    std::cout << "Last Name: " << last_name << "     ";
    std::cout << "Age: " << age << "    ";

    std::cout << "daysInCourse: {" << num_days[0] << ", " << num_days[1] << ", " << num_days[2] << "}     ";
    std::cout << "Degree program: " << get_degree_program() << std::endl;
}