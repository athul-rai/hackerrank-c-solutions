
/*
   Problem: Printing Pattern Using Loops

   Given an integer n, print a square pattern of
   numbers from n down to 1 and back to n.

   The pattern contains (2*n - 1) rows and
   (2*n - 1) columns.

   Each number depends on its minimum distance
   from the top, bottom, left and right boundaries.

   Example:
   Input:
   5

   Output:
   5 5 5 5 5 5 5 5 5
   5 4 4 4 4 4 4 4 5
   5 4 3 3 3 3 3 4 5
   5 4 3 2 2 2 3 4 5
   5 4 3 2 1 2 3 4 5
   5 4 3 2 2 2 3 4 5
   5 4 3 3 3 3 3 4 5
   5 4 4 4 4 4 4 4 5
   5 5 5 5 5 5 5 5 5
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    // Complete the code to print the pattern.
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int min = i;

            if (j < min)
                min = j;

            if (2 * n - 2 - i < min)
                min = 2 * n - 2 - i;

            if (2 * n - 2 - j < min)
                min = 2 * n - 2 - j;

            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}
