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

// While currentChar != ,
// we will concat onto a variable
// We will try to convert

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
    // Student *studentData[5]{nullptr};

    // Student jakob("A5", "Jakob", "Shavinski", "jshavi1@wgu.edu", 24, 30, 60, 90, SOFTWARE);

    // jakob.print();

    Roster class_roster;

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

    class_roster.printAll();

    for (Student *student : class_roster.class_roster_array)
    {
        class_roster.printAverageDaysInCourse(student->get_student_id());
    }

    class_roster.printByDegreeProgram(SOFTWARE);
    class_roster.remove("A3");
    class_roster.printAll();
    // class_roster.remove("A3");

    return 0;
}