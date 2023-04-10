// Given a number N. Print the digits of that number from right to left separated by space.

// Input
// First line contains a number T (1 ≤ T ≤ 10) number of test cases.

// Next T lines will contain a number N (0 ≤ N ≤ 109)

// Output
// For each test case print a single line contains the digits of the number separated by space.

#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int t=1;t<=test;t++)
    {
        int a;
        scanf("%d",&a);
        do
        {
         printf("%d ",a%10);
         a=a/10;
         }
        while(a!=0);
        printf("\n");

    }
    return 0;
}