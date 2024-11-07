A3. Write a program to find the  n-th number made of prime digits

Input Format:
First Line Of Input Contains T Number Of Test Cases
Second Line Of Input Contains an input Number N.

Output Format:
Print the Nth number of sequence and it should be only prime.

Constraints:
1<=T<=100
1<=N<=10000

Examples :
Input  :
1
10
Output :
 33




PROGRAM:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CAP 10000
void findprime(int n) {
    int prime_digits[] = {1,4,6,9};
    char queue[CAP][20]; 
    int front = 0, rear = 0;
    for (int i = 0; i < 4; i++) {
        queue[rear][0] = prime_digits[i] + '0';  
        queue[rear][1] = '\0'; 
        rear++;
    }
    char result[20];  
 
    for (int count = 1; count <= n; count++) 
    {
        strcpy(result, queue[front]);
        front++;
        if (count == n) {
            printf("%s\n", result);
            return;
        }
        for (int i = 0; i < 4; i++) {
            strcpy(queue[rear], result);
            int len = strlen(queue[rear]);
            queue[rear][len] = prime_digits[i] + '0'; 
            queue[rear][len + 1] = '\0'; 
            rear++;
        }
    }
}
int main() 
{
    int T, N;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        findprime(N);
    }
    return 0;
}


OUTPUT:
1
6
14