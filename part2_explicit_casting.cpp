#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double d = 9.8;

    int truncated = (int)d;          // cast directly
    int rounded = (int)(d + 0.5);    // manual rounding

    cout << "Original double: " << d << endl;
    cout << "Truncated: " << truncated << endl;
    cout << "Rounded: " << rounded << endl;

    return 0;
}
