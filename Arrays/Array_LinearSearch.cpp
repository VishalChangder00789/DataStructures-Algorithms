/*Linear Search can be used when the array is not sorted as it checks each element
Therefore taking O(n) time complexity. */

#include <bits/stdc++.h>
#include <climits>

int Search_LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            // The loop gets broken at this point program ends.
            return i;
        }
    }

    return -1;
}

int main()
{
    //1000 memory location slots are allocated after compilation.
    // since it is an integer it takes 4 bytes of memory.
    // therefore 1000*4 = 4000 bytes or 4MB memory is oocupied at this point of time.
    int arr[1000];
    int n;
    int key;

    std::cout << "Enter the key to be searched : " << std::endl;
    std::cin >> key;

    std::cout << "Enter the number of elements you want inside your array : " << std::endl;
    std::cin >> n;

    // Enter elements inside your array.
    for (int i = 0; i < n; i++)
    {
        std::cout << "Please enter the element no. : " << i + 1 << std::endl;
        std::cin >> arr[i];
    }

    // Invoke Linear search by calling the function
    int result = Search_LinearSearch(arr, n, key);
    if (result == -1)
    {
        std::cout << "Key Not found at any index : " << std::endl;
    }
    else
    {
        std::cout << "Key found at index : " << result << std::endl;
    }
}