#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        char ch = 'A';
        for (int j = 1; j <= i; ++j)
            cout << ch++;
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int s = 1; s <= n - i; ++s)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; ++j)
            cout << "*";
        cout << endl;
    }
}

void pattern3(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= 2 * (size - i); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = size - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        for (int j = 1; j <= 2 * (size - i); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    cout << "Pattern 1:" << endl;
    pattern1(5);

    cout << "\nPattern 2:" << endl;
    pattern2(4);

    cout << "\nPattern 3:" << endl;
    pattern3(3);

    return 0;
}
