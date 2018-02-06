/*
    Peter wants to generate some prime numbers for his cryptosystem. Help him! Your task is to generate all prime 
    numbers between two given numbers!

    Input
    The input begins with the number t of test cases in a single line (t<=10). In each of the next t lines there are 
    two numbers m and n (1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

    Output
    For every test case print all prime numbers p such that m <= p <= n, one number per line, test cases separated by 
    an empty line.

    Example
    Input:
    2
    1 10
    3 5

    Output:
    2
    3
    5
    7

    3
    5
    
    
    This program should be done with squrt function.
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void printPrimeInGivenRange(unsigned long long start, unsigned long long end)
{
    unsigned long long i;
    unsigned long long temp=start;
    int flag;
    while (temp<=end) {
        if (2==temp || 3==temp) { 
            printf("%lld\n",temp);
            temp++;
            continue;
        }
        for (i=2; i<=sqrt(temp); i++) {
            if (0==(temp%i)) {
                flag=0; 
                break;
            } else flag=1;
        }
        if (1==flag)
            printf("%lld\n",temp);
        temp++;
    }
}

int main(void)
{
    unsigned long long i, j=0, *start, *end;
    scanf("%lld",&i);
    start=(unsigned long long *)malloc((sizeof(unsigned long long )) * i);
    end=(unsigned long long *)malloc((sizeof(unsigned long long)) * i);
    while (j<i)
    {
       scanf("%lld",&start[j]);
       scanf("%lld",&end[j]);
       j++;
    }
    j=0;
    while (j<i){
        printPrimeInGivenRange(start[j],end[j]);
        printf("\n");
        j++;
    }
    free(start);
    free(end);
    return 0;
}

