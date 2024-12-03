#include <iostream>
using namespace std;

int main() {
    const string password = "1234";
    string input;
    bool accessGranted = false;

    for (int attempts = 1; attempts <= 3; attempts++) {
        cout << "Enter password: ";
        cin >> input;

        if (input == password) {
            cout << "Access granted.\n";
            accessGranted = true;
            break;
        } else {
            cout << "Incorrect password. Attempts left: " << 3 - attempts << endl;
        }
    }

    if (!accessGranted) 
        cout << "Access denied.\n";

    return 0;
}
