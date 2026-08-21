//Write a program to print numbers from 1 to n.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    for(int i = 0; i<n ; i++){
        printf("%d\n",i+1);
    }
    return 0;
}