// 14. Function Templates
#include <iostream>
using namespace std;

template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}
int main() {
    cout << "Max Int: " << maxValue(3, 7) << endl;
    cout << "Max Double: " << maxValue(2.5, 1.5) << endl;
    return 0;
}
//Template function works with any data type.

