/*
   Problem: Sum and Difference of Two Numbers

   Read two integers and two floating-point numbers from stdin.

   Print the sum and difference of the two integers
   on the first line.

   Print the sum and difference of the two floating-point
   numbers rounded to one decimal place on the second line.

   Example:
   Input:
   10 4
   4.0 2.0

   Output:
   14 6
   6.0 2.0
*/

#include <stdio.h>

int main()
{
    int a, b;
    float c, d;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    printf("%d %d\n", a + b, a - b);
    printf("%.1f %.1f\n", c + d, c - d);

    return 0;
}