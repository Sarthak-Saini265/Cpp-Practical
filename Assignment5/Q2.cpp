#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class TRIANGLE
{
private:
    double a, b, c;

    void validate()
    {
        if (a <= 0 || b <= 0 || c <= 0)
            throw invalid_argument("All sides must be greater than 0.");
        if (a + b <= c || a + c <= b || b + c <= a)
            throw invalid_argument("Sum of any two sides must be greater than the third side.");
    }

public:
    TRIANGLE(double x, double y, double z) : a(x), b(y), c(z)
    {
        validate();
    }

    double area()
    {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double area(double base, double height)
    {
        return 0.5 * base * height;
    }
};

int main()
{
    try
    {
        double a, b, c;
        cout << "Enter three sides of the triangle: ";
        cin >> a >> b >> c;
        TRIANGLE t(a, b, c);
        cout << "Area using Heron's formula: " << t.area() << endl;

        double base, height;
        cout << "\nEnter base and height for right-angled triangle: ";
        cin >> base >> height;
        cout << "Area of right-angled triangle: " << t.area(base, height) << endl;
    }
    catch (const exception &e)
    {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
