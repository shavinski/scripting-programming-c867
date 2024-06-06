#include "Student.cpp"
#include "Student.h"
#include <iostream>
#include <string>

const std::string studentData[] =
    {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
     "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
     "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
     "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
     "A5,Jakob,Shavinski,jshavi1@wgu.edu,24,10,20,30,SOFTWARE"};

int main()
{
    Student jakob("A5", "Jakob", "Shavinski", "jshavi1@wgu.edu", 24, 30, 60, 90, SOFTWARE);

    jakob.print();

    return 0;
}