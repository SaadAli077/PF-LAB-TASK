#include <iostream>
using namespace std;

int main() {
    int number, oddCount = 0, evenCount = 0;

    while (true) {
        cout << "Enter a number (0 to stop): ";
        cin >> number;

        if (number == 0) break;

        if (number % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    cout << "Odd numbers: " << oddCount << "\nEven numbers: " << evenCount << endl;
    return 0;
}
