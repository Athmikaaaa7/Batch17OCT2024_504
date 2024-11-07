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


Program:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void findprime(int n) {
    int prime_digits[] = {2, 3, 5, 7};
    char result[20]; 
    char numbers[4][20] = {"2", "3", "5", "7"};
    int count = 0; 
    for (int i = 0; i < 4; i++) {
        strcpy(result, numbers[i]);
        count++;
        if (count == n) 
        {
            printf("%s\n", result);
            return;
        }
        for (int j = 0; j < 4; j++) {
            char new_number[20];
            strcpy(new_number, result);
            int len = strlen(new_number);
            new_number[len] = prime_digits[j] + '0';
            new_number[len + 1] = '\0'; 
            if (++count == n) {
                printf("%s\n", new_number);
                return;
            }
        }
    }
}
int main() {
    int T, N;
    scanf("%d", &T);
    while (T--) {
        scanf("%d", &N);
        findprime(N);
    }
    return 0;
}




OUTPUT:
1
10
33