#include <iostream>

int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2];

    std::cout << "First array: ";
    for (int i = 0; i < n1; i++)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Second array: ";
    for (int i = 0; i < n2; i++)
    {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n1)
    {
        merged[k++] = arr1[i++];
    }

    while (j < n2)
    {
        merged[k++] = arr2[j++];
    }

    std::cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++)
    {
        std::cout << merged[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
