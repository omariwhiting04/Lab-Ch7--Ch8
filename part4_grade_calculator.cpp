#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter numeric grade (0-100): ";
    cin >> grade;

    // if-else chain
    if (grade >= 90) cout << "Letter grade: A\n";
    else if (grade >= 80) cout << "Letter grade: B\n";
    else if (grade >= 70) cout << "Letter grade: C\n";
    else if (grade >= 60) cout << "Letter grade: D\n";
    else cout << "Letter grade: F\n";

    // switch demonstration 
    switch (grade / 10) {
        case 10:
        case 9: cout << "Switch grade: A\n"; break;
        case 8: cout << "Switch grade: B\n"; break;
        case 7: cout << "Switch grade: C\n"; break;
        case 6: cout << "Switch grade: D\n"; break;
        default: cout << "Switch grade: F\n"; break;
    }
    return 0;
}
