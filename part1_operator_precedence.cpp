#include <iostream>
using namespace std;

int main() {
    // Expression 1: default operator precedence
    int result1 = 8 + 4 * 3 - 6 / 2;
    cout << "Expression 1 (default precedence): " << result1 << endl;

    // Expression 2: force addition first
    int result2 = (8 + 4) * 3 - 6 / 2;
    cout << "Expression 2 ((8 + 4) * 3 - 6 / 2): " << result2 << endl;

    // Expression 3: force subtraction earlier
    int result3 = 8 + (4 * (3 - 6)) / 2;
    cout << "Expression 3 (8 + (4 * (3 - 6)) / 2): " << result3 << endl;

    return 0;
}
