#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <Degree.h>

class Student
{
private:
    // All private student variables
    std::string student_id;
    std::string first_name;
    std::string last_name;
    std::string email;
    int age;
    int *num_days;
    DegreeProgram degree_program;

public:
    // Constructor all input params
    Student(std::string student_id, std::string first_name, std::string last_name,
            std::string email, int age, int *num_days, DegreeProgram degree_program);

    // Accessor/Getter methods
    std::string get_student_id() const;
    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_email() const;
    int get_age() const;
    int *get_num_days() const;
    DegreeProgram get_degree_program() const;

    // Mutator/Setter methods
    void set_student_id(std::string student_id);
    void set_first_name(std::string first_name);
    void set_last_name(std::string last_name);
    void set_email(std::string email);
    void set_age(int age);
    void set_num_days(int* num_days);
    void set_degree_program(DegreeProgram degree_program);

    // Print method
    void print() const;
};

#endif