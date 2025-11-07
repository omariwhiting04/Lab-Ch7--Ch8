#include <iostream>
using namespace std;

int main() {
    int i = 0;

    cout << "Using goto:\n";
loop_start:
    if (i > 5) goto loop_end;
    cout << i << " ";
    i++;
    goto loop_start;
loop_end:

    cout << "\n\nUsing for loop:\n";
    for (int j = 0; j <= 5; j++) {
        cout << j << " ";
    }
    cout << endl;

    return 0;
}
