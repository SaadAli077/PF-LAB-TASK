// 15. Function Pointers
#include <iostream>
using namespace std;

void greet() {
    cout << " function pointer " << endl;
}
int main() {
    void (*funcPtr)() = &greet; // Function pointer

    funcPtr(); // Call the function

    return 0;
}
