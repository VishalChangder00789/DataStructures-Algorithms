#include <bits/stdc++.h>

void Sort_SelectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int minEle = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[minEle])
            {
                minEle = j;
            }
        }

        std::swap(arr[i], arr[minEle]);
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

    Sort_SelectionSort(arr, n);

    PrintArray(arr, n);
}