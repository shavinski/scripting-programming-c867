#include "Student.h"
#include "Degree.h"
#include <iostream>

// ------------ constructor ----------------------
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

    // Allocate memory for new array and initialize to 0's, no junk data
    this->num_days = new int[3]{0};
    for (size_t i = 0; i < 3; i++)
    {
        this->num_days[i] = num_days[i];
    }

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

int *Student::get_num_days() const
{
    return num_days;
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

void Student::set_num_days(int *num_days)
{
    for (size_t i = 0; i < 3; i++)
    {
        this->num_days[i] = num_days[i];
    }
}

void Student::set_degree_program(DegreeProgram degree_program)
{
    this->degree_program = degree_program;
}

// ------------ Additional Methods ----------------------
void Student::print() const
{
    std::cout << student_id << ", ";
    std::cout << first_name << " ";
    std::cout << last_name << ", ";
    std::cout << email << ", ";
    std::cout << age << ", ";

    for (size_t i = 0; i < 3; i++)
    {
        std::cout << num_days[i] << " ";
    }

    std::cout << " ";
    std::cout << degree_program << std::endl;
}