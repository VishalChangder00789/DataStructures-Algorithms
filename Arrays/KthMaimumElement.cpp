/*
    This question does not ask about time complexity 
    Therefore sorting the array in decreasing order
     and then give the kth index element


     //perfect
*/
#include <bits/stdc++.h>

bool comparator(int a, int b)
{
    return a > b;
}
int FindKthMax(int arr[], int n, int k, bool (&comparator)(int a, int b))
{
    std::sort(arr, arr + n, comparator);
    return arr[k];
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
    int n, k;

    // 7 10 4 3 20 15  == 6 && 4

    std::cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    PrintArray(arr, n);

    int result = FindKthMax(arr, n, k - 1, comparator);
    PrintArray(arr, n);
    std::cout << "The " << k << "th greatest element inside the array is : " << result << std::endl;
}