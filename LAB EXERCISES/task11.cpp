// 11. Inline Functions
#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}
int main() {
    cout << "Square: " << square(4) << endl;
    return 0;
}

// Inline functions suggest the compiler to expand the function code inline.

