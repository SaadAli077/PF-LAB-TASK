#include <iostream>
#include <string>
using namespace std;

// Structure to hold student details
struct Student {
    string name;
    int rollNumber;
    int marks[3];
};

// Function 
void addStudent(Student &student) {
    cout << "Enter Name: ";
    cin.ignore(); 
    getline(cin, student.name);
    
    cout << "Enter Roll Number: ";
    cin >> student.rollNumber;

    cout << "Enter Marks for 3 subjects: ";
    for (int i = 0; i < 3; ++i) {
        cin >> student.marks[i];
    }

    cout << "Student details added successfully!" << endl;
}

// Function to calculate the total marks of a student
int calculateTotalMarks(const Student &student) {
    int total = 0;
    for (int i = 0; i < 3; ++i) {
        total += student.marks[i];
    }
    return total;
}

// Function to display a student's details
void displayStudent(const Student &student) {
    cout << "\nStudent Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Roll Number: " << student.rollNumber << endl;
    cout << "Marks: ";
    for (int i = 0; i < 3; ++i) {
        cout << student.marks[i] << " ";
    }
    cout << "\nTotal Marks: " << calculateTotalMarks(student) << endl;
}

int main() {
    Student student;
    
    // Adding a student's details
    cout << "Adding a Student" << endl;
    addStudent(student);

    // Displaying 
    cout << "\nDisplaying a Student" << endl;
    displayStudent(student);

    return 0;
}

