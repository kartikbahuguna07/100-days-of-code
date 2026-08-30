//Q42: Write a program to check if a number is a perfect number.


#include <stdio.h>
int main()
{
    int n,a = 0;
    printf("Enter number: ");
    scanf("%d",&n);
    for(int i = 1;i<n;i++){
        if(n%i==0)
            a += i;
    }
    if(a == n)
        printf("%d is a perfect number.\n",n);
    else
        printf("%d is not a perfect number.\n",n);
    return 0;
}
