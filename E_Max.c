// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 103).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

// Output
// Print the maximum number.


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int a,max=0;
//     for(int i=1;i<=n;i++)
//     {
//         //kaj
//         scanf("%d",&a);
//         if(a>max)
//         {
//             max=a;
//         }
//     }
//     printf("%d\n",max);
//     return 0;
// }

//min and max ber korar jonno

#include<stdio.h>
#include<limits.h>//aita max and min ar jonno
int main()
{
    int n;
    scanf("%d",&n);
    int a,max=INT_MIN,min=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        //kaj
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        if(a<min)
        {
            min=a;
        }
    }
    printf("%d %d\n",min,max);
    return 0;
}
