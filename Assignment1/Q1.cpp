#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0)
            return false;
    return true;
}

int main()
{
    int n, count = 0, num = 2;
    cout << "Enter the value of n: ";
    cin >> n;

    while (count < n)
    {
        if (isPrime(num))
        {
            cout << num << " ";
            ++count;
        }
        ++num;
    }

    cout << endl;
    return 0;
}
