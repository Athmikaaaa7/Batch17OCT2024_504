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
 
int findPrime(int);
int countPrime(int);
 
int main()
{
    int T, N;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);  
        countNum(N);
    }
    return 0;
}
 

int findNum(int n)
{
    int d;
    while(n >0)
    {
        d = n%10;
        if(d!=1 && d!=4 && d!=6 &&d!=9)
            return 0;
        n = n/10;
    }
    return 1;
}

int countNum(int num)
{
    int count = 0;
    int a = 1;
    while(count<num)
    {
        if(findNum(a))
        {
            count++;
            if(count==num)
            {
                printf("%d",a);
            }
        }
        a++;
    }
}


OUTPUT:
1
6
14