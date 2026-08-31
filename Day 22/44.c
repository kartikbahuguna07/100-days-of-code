// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

    #include <stdio.h>
    int main()
    {
        int n;
        float a = 1.0;
        printf("Enter a number: ");
        scanf("%d",&n);
        for(int i = 2;i<=n;i++){
            a += (float)(2*i-1)/(2*i);
        }
        printf("The sum of series upto the %dth digit = %.1f.\n",n,a);
        return 0;
    }
