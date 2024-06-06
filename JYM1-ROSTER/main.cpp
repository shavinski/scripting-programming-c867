#include "Student.cpp"
#include "Student.h"
#include <iostream>

int main()
{
    Student jakob("011881471", "Jakob", "Shavinski", "jshavi1@wgu.edu", 24, new int[3]{30, 60, 90}, SOFTWARE);

    jakob.print();

    return 0;
}