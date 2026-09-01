//Q40: Write a program to find the 1’s complement of a binary number and print it.


#include <stdio.h>
int main()
{
    int num,n[100],i=0;
    printf("Enter number: ");
    scanf("%d",&num);
    int temp = num;
    while(temp != 0){
        n[i] = temp%2;
        temp /= 2;
        i++;
    }
    int n1[100];
    int l = 0;
    for(int j = i-1;j>=0;j--){
        n1[l] = n[j];
        l++;
    }
    for(int k = 0;k<i;k++){
        if(n1[k] == 0)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
    return 0;
}
