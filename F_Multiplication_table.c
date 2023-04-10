// Given a number N. Print the maltiplication table of the number from 1 to 12

// For example: if N = 1


// Input
// Only one line containing a number N (1 ≤ N ≤ 50).

// Output
// Print 12 lines according to the required above.



#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=12;i++)
    {
        printf("%d * %d = %d\n",a,i,a*i);
    }
    return 0;
}