#include "Student.cpp"
#include "Student.h"
#include "Roster.cpp"
#include "Roster.h"

#include <iostream>
#include <string>
#include <vector>

const std::string student_data[] =
    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
     "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
     "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
     "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
     "A5,Jakob,Shavinski,jshavi1@wgu.edu,24,10,20,30,SOFTWARE"};

// Parse function to get necessary information from strings
std::vector<std::string> parse(std::string s)
{
    int string_length = s.length();
    std::vector<std::string> parsed_string_result;
    std::string value{""};

    for (size_t i = 0; i < string_length; i++)
    {
        char currentChar = s[i];

        if (currentChar != ',')
        {
            value += currentChar;
        }
        else
        {
            parsed_string_result.push_back(value);
            value = "";
        }
    }

    if (!value.empty())
    {
        parsed_string_result.push_back(value);
    }

    return parsed_string_result;
}

// Type conversion for string -> DegreeProgram
DegreeProgram stringToDegreeType(std::string s)
{
    if (s == "SECURITY")
    {
        return SECURITY;
    }
    else if (s == "NETWORK")
    {
        return NETWORK;
    }

    return SOFTWARE;
}

int main()
{
    std::cout << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;
    std::cout << "Scripting and Programming - Applications - C867" << std::endl;
    std::cout << "Language used: C++" << std::endl;
    std::cout << "WGU Student ID: 011881471" << std::endl;
    std::cout << "Jakob Shavinski" << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;

    // Instantiate a class_roster object from class Roster
    Roster class_roster;

    // Loop through data and parse the data to create and add students to class_roster array
    for (const std::string student : student_data)
    {
        std::vector<std::string> parsed_student_data = parse(student);

        std::string student_id = parsed_student_data.at(0);
        std::string first_name = parsed_student_data.at(1);
        std::string last_name = parsed_student_data.at(2);
        std::string email = parsed_student_data.at(3);
        int age = std::stoi(parsed_student_data.at(4));
        int days_course1 = std::stoi(parsed_student_data.at(5));
        int days_course2 = std::stoi(parsed_student_data.at(6));
        int days_Course3 = std::stoi(parsed_student_data.at(7));
        DegreeProgram degree_program = stringToDegreeType(parsed_student_data.at(8));

        class_roster.add(student_id, first_name, last_name, email, age, days_course1, days_course2, days_Course3, degree_program);
    }

    std::cout << std::endl;
    std::cout << "Print all: " << std::endl;
    class_roster.printAll();
    std::cout << std::endl;

    std::cout << "Print invalid emails: " << std::endl;
    class_roster.printInvalidEmails();
    std::cout << std::endl;

    std::cout << "Print average days in course: " << std::endl;
    for (Student *student : class_roster.class_roster_array)
    {
        class_roster.printAverageDaysInCourse(student->get_student_id());
    }
    std::cout << std::endl;

    std::cout << "Print by software degree program: " << std::endl;
    class_roster.printByDegreeProgram(SOFTWARE);
    std::cout << std::endl;

    std::cout << "We remove student by id: A3 " << std::endl;
    class_roster.remove("A3");
    std::cout << std::endl;

    std::cout << "Print all after A3 removed: " << std::endl;
    class_roster.printAll();
    std::cout << std::endl;

    std::cout << "We try to remove student by id: A3, after deletion: " << std::endl;
    class_roster.remove("A3");
    std::cout << std::endl;

    return 0;
}