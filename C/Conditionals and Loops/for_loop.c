/*
   Problem: For Loop in C

   Given two integers, a and b, print all integers
   in the inclusive interval [a, b].

   If a number is between 1 and 9, print its
   corresponding lowercase English word.

   If a number is greater than 9:
   - Print "even" if it is even.
   - Print "odd" if it is odd.

   Example:
   Input:
   8
   11

   Output:
   eight
   nine
   even
   odd
*/

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    // Write Your Code Here
    for (int i = a; i <= b; i++)
    {
        if (i == 1)
            printf("one\n");
        else if (i == 2)
            printf("two\n");
        else if (i == 3)
            printf("three\n");
        else if (i == 4)
            printf("four\n");
        else if (i == 5)
            printf("five\n");
        else if (i == 6)
            printf("six\n");
        else if (i == 7)
            printf("seven\n");
        else if (i == 8)
            printf("eight\n");
        else if (i == 9)
            printf("nine\n");
        else if (i % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }

    return 0;
}