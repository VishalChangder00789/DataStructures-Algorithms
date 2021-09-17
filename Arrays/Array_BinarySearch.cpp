/*In Binary Search it is very important to keep the array sorted otherwise it wouldn't work
therefore some sorting function must be used before that.

It is my personal understanding*/

#include <bits/stdc++.h>
#include <climits>

int Search_BinarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = arr[n - 1];

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            //search left
            e = mid - 1;
        }
        else
        {
            //search right
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[1000];
    int n, key;

    std::cin >> n >> key;

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int result = Search_BinarySearch(arr, n, key);
    if (result == -1)
    {
        std::cout << "The element is not found thorughout the array : " << std::endl;
    }
    else
    {
        std::cout << "The element is found at the index : " << result << std::endl;
    }
}