#include <iostream>
using namespace std;

int main() {
    cout << "For loop:\n";
    for (int i = 1; i <= 10; i++) cout << i << " ";
    cout << "\n\nWhile loop:\n";
    int j = 1;
    while (j <= 10) { cout << j << " "; j++; }

    cout << "\n\nDo-while loop:\n";
    int k = 1;
    do { cout << k << " "; k++; } while (k <= 10);

    cout << "\n\nEven numbers (using continue):\n";
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) continue;
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
