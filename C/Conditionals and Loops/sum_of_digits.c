/*
   Problem: Sum of Digits of a Five Digit Number

   Given a five digit integer, calculate and print
   the sum of its digits.

   Example:
   Input:
   10564

   Output:
   16
*/

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;

    scanf("%d", &n);

    // Write Your Code Here
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}