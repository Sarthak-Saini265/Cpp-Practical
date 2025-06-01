#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int left, int right, int key) {
    if (left > right) 
        return -1; // Element not found
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarySearchRecursive(arr, left, mid - 1, key);
    else
        return binarySearchRecursive(arr, mid + 1, right, key);
}

int binarySearchIterative(int arr[], int size, int key) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;
    
    cout << "Enter the element to search: ";
    cin >> key;
    
    int resultRecursive = binarySearchRecursive(arr, 0, size - 1, key);
    int resultIterative = binarySearchIterative(arr, size, key);
    
    if (resultRecursive != -1)
        cout << "Element found at index (Recursive): " << resultRecursive << endl;
    else
        cout << "Element not found (Recursive)" << endl;
    
    if (resultIterative != -1)
        cout << "Element found at index (Iterative): " << resultIterative << endl;
    else
        cout << "Element not found (Iterative)" << endl;
    
    return 0;
}