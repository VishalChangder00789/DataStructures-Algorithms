#include <bits/stdc++.h>
#include <climits>

void Sort_WithZeroOnesTwos(int arr[], int n)
{

    /// Data pattern with 3 different object segregation
    int low = 0, mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            std::swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        if (arr[mid] == 1)
        {
            mid++;
        }

        if (arr[mid] == 2)
        {
            std::swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{

    int arr[1000];
    int n;

    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    PrintArray(arr, n);
    Sort_WithZeroOnesTwos(arr, n);
    PrintArray(arr, n);
}