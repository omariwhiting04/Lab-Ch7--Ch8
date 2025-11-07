#include <iostream>
using namespace std;

int main() {
    bool a = true, b = false;

    bool expr1 = !(a && b);
    bool expr2 = !a || !b;
    bool expr3 = !(a || b);
    bool expr4 = !a && !b;

    cout << "!(a && b) = " << expr1 << ", !a || !b = " << expr2 << endl;
    cout << "!(a || b) = " << expr3 << ", !a && !b = " << expr4 << endl;

    return 0;
}
