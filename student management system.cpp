

// NAME :SYED SAAD ALI
// ID  :F24CSC038


#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to hold student details
struct Student {
    string name;       
    string id;        
    string department; 
};

// Vector to store all students
vector<Student> students;

// Function to add a new student
void addStudent() {
    Student newStudent;
    cout << "\nEnter Student Name: ";
    cin.ignore();
    getline(cin, newStudent.name);
    cout << "Enter Student ID: ";
    cin >> newStudent.id;
    cout << "Enter Student Department: ";
    cin.ignore();
    getline(cin, newStudent.department);

    students.push_back(newStudent); // Add new student to the list
    cout << "Student added successfully!\n";
}

// Function to display all students
void displayAllStudents() {
    if (students.empty()) {
        cout << "\nNo students to display.\n";
        return;
    }

    cout << "\nList of Students:\n";
    for (size_t i = 0; i < students.size(); ++i) {
        cout << "Name: " << students[i].name << ", ID: " << students[i].id
             << ", Department: " << students[i].department << "\n";
    }
}

// Function to search for a student by ID
void searchStudentByID() {
    string searchID;
    cout << "\nEnter Student ID to search: ";
    cin >> searchID;

    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i].id == searchID) {
            cout << "\nStudent Found:\n";
            cout << "Name: " << students[i].name << ", ID: " << students[i].id
                 << ", Department: " << students[i].department << "\n";
            return;
        }
    }

    cout << "\nStudent with ID " << searchID << " not found.\n";
}

// Function to update student information
void updateStudent() {
    string updateID;
    cout << "\nEnter Student ID to update: ";
    cin >> updateID;

    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i].id == updateID) {
            cout << "\nEnter new name (current: " << students[i].name << "): ";
            cin.ignore();
            getline(cin, students[i].name);
            cout << "Enter new department (current: " << students[i].department << "): ";
            getline(cin, students[i].department);
            cout << "\nStudent information updated successfully!\n";
            return;
        }
    }

    cout << "\nStudent with ID " << updateID << " not found.\n";
}

// Function to delete a student
void deleteStudent() {
    string deleteID;
    cout << "\nEnter Student ID to delete: ";
    cin >> deleteID;

    for (size_t i = 0; i < students.size(); ++i) {
        if (students[i].id == deleteID) {
            students.erase(students.begin() + i); // Remove student from the list
            cout << "\nStudent deleted successfully!\n";
            return;
        }
    }

    cout << "\nStudent with ID " << deleteID << " not found.\n";
}

// Main menu function
void showMenu() {
    while (true) {
        cout << "\nStudent Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Update Student Information\n";
        cout << "5. Delete Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                searchStudentByID();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "\nExiting program. Goodbye!\n";
                return;
            default:
                cout << "\nInvalid choice. Please try again.\n";
        }
    }
}

int main() {
    showMenu();
    return 0;
}

