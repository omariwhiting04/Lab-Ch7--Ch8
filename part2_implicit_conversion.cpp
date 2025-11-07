#include <iostream>
using namespace std;

int main() {
    int i = 5;
    double d = 3.7;
    float f = 2.1f;

    // Predict and print
    auto a = i + d;  // int + double → double
    auto b = i / d;  // int / double → double (no truncation)
    auto c = f + i;  // float + int → float

    cout << "a = i + d → " << a << " (type: double)\n";
    cout << "b = i / d → " << b << " (type: double)\n";
    cout << "c = f + i → " << c << " (type: float)\n";

    return 0;
}
