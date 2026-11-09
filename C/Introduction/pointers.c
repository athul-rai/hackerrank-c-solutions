/*
    Problem: Pointers in C

    Complete the function update(int *a, int *b).
    Set the value of a to their sum
    and the value of b to their absolute difference.

    Example:
    Input:
    4
    5

    Output:
    9
    1
*/
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int sum = *a + *b;
    int diff = *a - *b;

    if (diff < 0)
    {
        diff = -diff;
    }

    *a = sum;
    *b = diff;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}