#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <degree.h>

class Student
{
private:
    std::string student_id;
    std::string first_name;
    std::string last_name;
    std::string email;
    int age;
    int num_days[3];
    DegreeProgram degree_program;

public:
    // Constructor all input params
    Student(std::string student_id, std::string first_name, std::string last_name,
            std::string email, int age, int num_days[], DegreeProgram degree_program);

    // Accessor/Getter methods
    std::string get_student_id();
    std::string get_first_name();
    std::string get_last_name();
    std::string get_email();
    int get_age();
    int get_num_days();
    DegreeProgram get_degree_program();

    // Mutator/Setter methods
    std::string set_student_id();
    std::string set_first_name();
    std::string set_last_name();
    std::string set_email();
    int set_age();
    int set_num_days();
    DegreeProgram set_degree_program();

    // Print method
    void print();
};

#endif