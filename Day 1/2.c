// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d",&x);
    scanf("%d",&y);

    printf("The sum of %d and %d = %d.\n",x,y,x+y);
    printf("The Difference of %d and %d = %d.\n",x,y,x-y);
    printf("The Product of %d and %d = %d.\n",x,y,x*y);
    printf("The Quotient of %d and %d = %d.\n",x,y,x/y);

    return 0;
}
