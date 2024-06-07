#include <iostream>
using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex operator+(const Complex& a, const Complex& b) {
    return { a.real + b.real, a.imag + b.imag };
}

Complex operator-(const Complex& a, const Complex& b) {
    return { a.real - b.real, a.imag - b.imag };
}

Complex operator*(const Complex& a, const Complex& b) {
    return { a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real };
}

Complex operator/(const Complex& a, const Complex& b) {
    double denominator = b.real * b.real + b.imag * b.imag;
    return { (a.real * b.real + a.imag * b.imag) / denominator, (a.imag * b.real - a.real * b.imag) / denominator };
}

ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real;
    if (c.imag >= 0) {
        out << " + " << c.imag << "i";
    }
    else {
        out << " - " << -c.imag << "i";
    }
    return out;
}

int main() {
    cout << "Home task #22.1\n\n";
    Complex a = { 1.0, 2.0 };
    Complex b = { 3.0, 4.0 };

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "a + b: " << a + b << endl;
    cout << "a - b: " << a - b << endl;
    cout << "a * b: " << a * b << endl;
    cout << "a / b: " << a / b << endl;

    return 0;
}
