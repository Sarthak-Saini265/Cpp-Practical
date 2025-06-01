#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0, double i = 0) : real(r), imaginary(i) {}

    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imaginary;
    }

    void output() const
    {
        cout << real << " + " << imaginary << "i" << endl;
    }

    Complex sum(const Complex &c) const
    {
        return Complex(real + c.real, imaginary + c.imaginary);
    }

    Complex subtract(const Complex &c) const
    {
        return Complex(real - c.real, imaginary - c.imaginary);
    }

    Complex product(const Complex &c) const
    {
        return Complex(real * c.real - imaginary * c.imaginary, real * c.imaginary + imaginary * c.real);
    }
};

int main()
{
    Complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.input();
    cout << "Enter second complex number:" << endl;
    c2.input();

    result = c1.sum(c2);
    cout << "Sum: ";
    result.output();

    result = c1.subtract(c2);
    cout << "Subtraction: ";
    result.output();

    result = c1.product(c2);
    cout << "Product: ";
    result.output();

    return 0;
}
