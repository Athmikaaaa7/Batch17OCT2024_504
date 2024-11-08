A5.
Write a c program to print alphabet triangle.
Input: 5
Output:

     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA



     1
    121
   12321
  1234321
 123454321



PROGRAMS:
#include <stdio.h>
void printSpaces(int n, int i) 
{
    for (int j=0; j<n-i; j++) 
    {
        printf(" ");
    }
}
void printInc(int i, char startChar)
{
    for (int j=0; j<i; j++) {
        printf("%c", startChar + j);
    }
}
void printDec(int i, char startChar)
{
    for (int j=i-2; j>= 0; j--) {
        printf("%c", startChar + j);
    }
}
void printAlphabet(int n) 
{
    for (int i=1; i<= n; i++) 
    {
        printSpaces(n, i);                   
        printInc(i, 'A');      
        printDec(i, 'A');      
        printf("\n");
    }
}
void printNum(int n) 
{
    for (int i=1; i<= n; i++)
    {
        printSpaces(n, i);                    
        printInc(i, '1');      
        printDec(i, '1');     
        printf("\n");
    }
}
 
int main() 
{
    int n;
    printf("");
    scanf("%d", &n);
    printf("\n");
    printAlphabet(n);
    printf("\n");
    printNum(n);
    return 0;
}



OUTPUT:
5

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

    1
   121
  12321
 1234321
123454321
