#include <iostream>

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int newSize = 0;
    for (int i = 0; i < n; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < newSize; j++)
        {
            if (arr[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            arr[newSize] = arr[i];
            newSize++;
        }
    }

    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}