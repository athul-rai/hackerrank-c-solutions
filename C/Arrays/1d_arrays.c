
/*
   Problem: 1D Arrays in C

   Given an integer n, create an array of size n.
   Read n space-separated integers from the user.

   Calculate the sum of all elements in the array
   and print the resulting sum.

   Example:
   Input:
   6
   16 13 7 2 1 12

   Output:
   51
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    // Read array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of array elements
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    // Print the sum
    printf("%d", sum);

    return 0;
}
