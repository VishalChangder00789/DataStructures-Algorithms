#include <bits/stdc++.h>
#include <climits>

std::pair<int, int> GreatestSmallest(int arr[], int n)
{
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return {max, min};
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

    std::pair<int, int> pair = GreatestSmallest(arr, n);

    std::cout << "The greatest element inside the array is : " << pair.first << std::endl;
    std::cout << "The smallest element inside the array is : " << pair.second << std::endl;
}