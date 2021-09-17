#include <bits/stdc++.h>

using namespace std;

void ReverseArray(int arr[], int n)
{
    int i = 0;     // first index
    int j = n - 1; //last index

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
}

void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
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

    ReverseArray(arr, n);
    std::cout << std::endl;
    PrintArray(arr, n);
}