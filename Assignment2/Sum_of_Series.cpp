#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    double sum = 0.0;
    cout << "Enter the number of terms (n): ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        double term = 1.0 / pow(i, i);
        if (i % 2 == 0)
            term *= -1;
        sum += term;
    }

    cout << "Sum of first " << n << " terms: " << sum << endl;

    return 0;
}
