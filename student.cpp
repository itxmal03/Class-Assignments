#include <iostream>
using namespace std;

int main()
{
    double rollNo, cgpa;
    bool is_Student;
    cout << "Enter Roll No:";
    cin >> rollNo;
    cout << "Enter CGPA";
    cin >> cgpa;
    cout << "Are you a student? if yes then enter 1 if no then enter 0 !";
    cin >> is_Student;
    cout << "Your Roll No is :" << rollNo << "Your CGPA is :" << cgpa << "Are you a Student? " << is_Student;
    return 0;
}