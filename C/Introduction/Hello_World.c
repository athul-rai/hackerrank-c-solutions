/*
   Problem: Hello, World!
 
   Read a line of text from stdin.
   Print "Hello, World!" on the first line
   and the input string on the second line.
  
   Example:
   Input:  Welcome to C programming.
  
   Output:
   Hello, World!
   Welcome to C programming.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    printf("Hello, World!\n%s",s);
    return 0;
}
