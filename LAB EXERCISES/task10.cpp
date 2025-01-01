// 10. Pass by Reference
#include <iostream>
using namespace std;

void modifyValue(int &x) {
    x = 10;
}
int main() {
    int num = 5;
    modifyValue(num);
    cout << "Value after modification: " << num << endl; // Changed
    return 0;
}

