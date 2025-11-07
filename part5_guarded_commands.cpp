#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed random generator

    int a, b;
    cout << "Enter two integers a and b: ";
    cin >> a >> b;

    bool guard1 = (a > b);
    bool guard2 = (b > a);

    if (guard1 && guard2) { // both true? randomize
        if (rand() % 2 == 0)
            guard2 = false;
        else
            guard1 = false;
    }

    if (guard1) {
        a = a - b;
        cout << "Guard 1 executed: a = a - b → " << a << endl;
    }
    if (guard2) {
        b = b - a;
        cout << "Guard 2 executed: b = b - a → " << b << endl;
    }

    return 0;
}
