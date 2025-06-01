#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n)
{
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - i - 1; ++j)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

template <typename T>
void printArray(T arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int intArr[] = {5, 2, 9, 1, 5, 6};
    int n1 = sizeof(intArr) / sizeof(intArr[0]);
    bubbleSort(intArr, n1);
    printArray(intArr, n1);

    double doubleArr[] = {3.2, 1.5, 4.8, 2.9};
    int n2 = sizeof(doubleArr) / sizeof(doubleArr[0]);
    bubbleSort(doubleArr, n2);
    printArray(doubleArr, n2);

    return 0;
}
