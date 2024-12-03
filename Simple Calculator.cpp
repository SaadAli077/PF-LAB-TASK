#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "Calculator Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            double num1, num2;
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

            switch (choice) {
                case 1: cout << "Result: " << num1 + num2 << endl; break;
                case 2: cout << "Result: " << num1 - num2 << endl; break;
                case 3: cout << "Result: " << num1 * num2 << endl; break;
                case 4: 
                    if (num2 != 0) 
                        cout << "Result: " << num1 / num2 << endl;
                    else 
                        cout << "Error: Division by zero.\n";
                    break;
            }
        } else if (choice != 5) {
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
