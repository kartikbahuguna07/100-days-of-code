// Write a program to find the product of odd digits of a number.

#include <stdio.h>
int main()
{
    int n,b = 1;
    printf("Enter number: ");
    scanf("%d",&n);
    int temp = n;
    while(temp!=0){
        int a = temp%10;
        if(a%2!=0){
            b *= a;
        }
        temp /= 10;
    }
    printf("The product of odd digits of %d = %d.\n",n,b);
    return 0;
}
