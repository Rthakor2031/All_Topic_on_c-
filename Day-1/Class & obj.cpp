// Day-1 Class and obj - class is a user-defined data type set as per user need.

#include <iostream>
using namespace std;

class Student {
public:  // This makes the members accessible outside the class
    int Rollno;
    string Name;
    float Perc;
};

int main() {
    Student s1;
    s1.Rollno = 1;  // Corrected the integer value
    s1.Name = "Rahul";
    s1.Perc = 74.20;

    // Displaying the student's details
    cout << "Roll No: " << s1.Rollno << endl;
    cout << "Name: " << s1.Name << endl;
    cout << "Percentage: " << s1.Perc << "%" << endl;

    return 0;
}

