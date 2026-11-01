/*
   Problem: Playing With Characters

   Read a character, a string, and a sentence from stdin.
   Print the character on the first line,
   the string on the second line,
   and the sentence on the third line.

   Example:
   Input:
   C
   Language
   Welcome To C!!

   Output:
   C
   Language
   Welcome To C!!
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch,s[100],sen[100];
    scanf("%c",&ch);
    printf("%c\n",ch);
    scanf(" %99s",s);  
    printf("%s\n",s);
    scanf(" %99[^\n]",sen);
    printf("%s",sen);
    return 0;
}