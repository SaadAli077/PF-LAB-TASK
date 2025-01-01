// 16. Static Functions
#include <iostream>
using namespace std;

class Counter {
public:
    static int count;
    Counter() { count++; }
    static void displayCount() {
        cout << "Count: " << count << endl;
    }
};
int Counter::count = 0;
int main() {
    Counter c1, c2, c3;
    Counter::displayCount();
    return 0;
}

