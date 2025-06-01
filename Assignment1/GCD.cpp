#include <iostream>
using namespace std;

int gcdRecursive(int a, int b) {
    if (b == 0)
        return a;
    return gcdRecursive(b, a % b);
}

int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << "GCD (recursive): " << gcdRecursive(a, b) << endl;
    cout << "GCD (iterative): " << gcdIterative(a, b) << endl;

    return 0;
}
