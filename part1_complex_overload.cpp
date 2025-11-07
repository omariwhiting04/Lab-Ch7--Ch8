#include <iostream>
using namespace std;

class Complex {
public:
    double real, imag;

    Complex(double r = 0, double i = 0) {
        real = r;
        imag = i;
    }

    // Overload +
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overload *
    Complex operator*(const Complex &c) {
        return Complex(
            (real * c.real - imag * c.imag),
            (real * c.imag + imag * c.real)
        );
    }

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex a(1, 2), b(3, 4);

    cout << "a = "; a.display();
    cout << "b = "; b.display();

    // Compute a + b * i
    Complex c = a + b * Complex(0, 1);
    cout << "Result (a + b * i): ";
    c.display();

    return 0;
}
