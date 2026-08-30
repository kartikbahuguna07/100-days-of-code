//Q41: Write a program to swap the first and last digit of a number.


#include <stdio.h>
int main()
{
    int n,i = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    int temp = n;
    while(temp!=0){
        i++;
        temp /= 10;
    }
    temp = n;
    int num[i];
    for(int j = 0;j<i;j++){
        num[j] = temp%10;
        temp /= 10;
    }
    printf("%d with its last and initial digit swapped = ",n);
    for(int k = i-1;k>=0;k--){
        if(k == 0)
            printf("%d",num[i-1]);
        else if(k == i-1)
            printf("%d",num[0]);
        else
            printf("%d",num[k]);
    }
    printf("\n");
    return 0;
}
