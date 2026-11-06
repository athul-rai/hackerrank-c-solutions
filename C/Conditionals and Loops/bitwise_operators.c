/*
   Problem: Bitwise Operators

   Given two integers n and k, find the maximum values
   of AND (&), OR (|), and XOR (^) operations for all
   pairs of integers i and j where 1 <= i < j <= n.

   Each result must be strictly less than k.

   Print the maximum AND, OR and XOR values on
   separate lines.

   Example:
   Input:
   5 4

   Output:
   2
   3
   3
*/

#include <stdio.h>

void calculate_the_maximum(int n, int k)
{
    int max_and = 0, max_or = 0, max_xor = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int and_result = i & j;
            int or_result = i | j;
            int xor_result = i ^ j;

            if (and_result < k && and_result > max_and)
                max_and = and_result;

            if (or_result < k && or_result > max_or)
                max_or = or_result;

            if (xor_result < k && xor_result > max_xor)
                max_xor = xor_result;
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    calculate_the_maximum(n, k);

    return 0;
}