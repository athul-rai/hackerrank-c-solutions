/*
   Problem: Functions in C

   Write a function that takes four integers
   and returns the greatest among them.
*/

#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int great = a;

    if (b > great)
    {
        great = b;
    }

    if (c > great)
    {
        great = c;
    }

    if (d > great)
    {
        great = d;
    }

    return great;
}

int main()
{
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = max_of_four(a, b, c, d);

    printf("%d", ans);

    return 0;
}