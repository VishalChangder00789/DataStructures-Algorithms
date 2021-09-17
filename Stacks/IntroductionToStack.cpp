/*
    This module helps to create stack using generic c++ langauge i.e without STL
    There are two methods of creating a stack.

    1. Using arrays 
    2. Using linkedList. or using pointers

    The stack is a data structure where it goes LIFO method.
    Therefore what enters last will come out first.
*/

#include <iostream>
#include <algorithm>

int i = 9;
int j = 0;

void Push(int passedValue, int arr[])
{
    std::cout << "Enter a value to put inside" << std::endl;
    int n;
    std::cin >> n;
    if (i == 0)
    {
        std::cout << "The stack is completely filled" << std::endl;
    }
    arr[i] = n;
    i--;
}

int Pop(int arr[])
{
    return arr[j];
    j++;
}

int main()
{
    int arr[10];
}