#include <iostream>
using namespace std;

bool check(int x, int y) {
    return (x > 0) && ((y++) > 0);  // y++ should NOT run if x <= 0
}

int main() {
    int x = -1, y = 5;
    cout << "Before: x=" << x << ", y=" << y << endl;

    bool result = check(x, y);
    cout << "After: x=" << x << ", y=" << y << endl;
    cout << "Result: " << result << endl;

    x = 2; y = 5;
    cout << "\nBefore: x=" << x << ", y=" << y << endl;
    result = check(x, y);
    cout << "After: x=" << x << ", y=" << y << endl;
    cout << "Result: " << result << endl;

    return 0;
}
