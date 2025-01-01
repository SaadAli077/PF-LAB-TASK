// 8. Default Parameters
#include <iostream>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}
int main() {
    greet();          // Uses default parameter
    greet("SAADI");   // Overrides default parameter
    return 0;
}
