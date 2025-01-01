// 1. Function Signature

#include <iostream>
using namespace std;

void info(int x) {
    cout << "Displaying integer: " << x << endl;
}
void info(double x) {
    cout << "Displaying double: " << x << endl;
}
int main() {
    display(5)        
    display(5.8);      
    return 0;
}
// Definition: The compiler differentiates overloaded functions by their name and parameter types.
