// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>
    int main()
    {
        int n;
        float a = 0.0;
        printf("Enter a number: ");
        scanf("%d",&n);
        for(int i = 1;i<=n;i++){
            a += (float)(2*i)/(4*i - 1);
        }
        printf("The sum of series upto the %dth digit = %.2f.\n",n,a);
        return 0;
    }
