A1. Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4

NoofWays=-1



Program:

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void sum(int n, bool primes[]) 
{
    for (int i = 2; i * i <= n; i++) 
    {
        if (primes[i]) 
        {
            for (int j = i * i; j <= n; j += i) 
            {
                primes[j] = false;
            }
        }
    }
}
void prime(int n) 
{
    bool primes[n + 1];
    for (int i = 0; i <= n; i++) {
        primes[i] = true; 
    }
    primes[0] = primes[1] = false; 
    sum(n, primes);

    int count = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (primes[i] && primes[n - i])
        {
            printf("%d = %d + %d\n", n, i, n - i);
            count++;
        }
    }
    if (count > 0) 
    {
        printf("NoofWays = %d\n", count);
    }
    else
    {
        printf("NoofWays = -1\n");
    }
}
void produce()
{
    int num;
    printf("Enter a positive integer: ");
    while (scanf("%d", &num) != 1 || num <= 0) {
        printf("Please enter a valid positive integer: ");
        while (getchar() != '\n');
    }
    prime(num);
}
int main() {
    produce();
    return 0;
}




output:

Enter a positive integer: 34
34 = 3 + 31
34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4

Enter a positive integer: 2
NoofWays = -1