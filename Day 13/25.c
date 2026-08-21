/Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main()
{
    int option,a,b;
    printf("Enter the numbers = ");
    scanf("%d %d",&a,&b);
    printf("Enter the operation you want to do.\n1 for Addition.\n2 for subtraction.\n3 for multiplication.\n4 for division.\n5 for modulus.\nOption = ");
    scanf("%d",&option);
    switch(option){
        case 1:
            printf("The summation of the given numbers = %d.\n",a+b);
            break;

        case 2:
            printf("The difference of %d and %d = %d.\n",a,b,a-b);
            break;
        
        case 3:
            printf("The product of %d and %d = %d.\n",a,b,a*b);
            break;

        case 4:
            if(b == 0){
                printf("Division by 0 is not possible.\n");
            }
            else{
                printf("The quotient of %d and %d = %d.\n",a,b,a/b);
            }
            break;

        case 5:
            if(b == 0){
                printf("Modulus by 0 is not possible.\n");
            }
            else{
                printf("The modulus of %d and %d = %d.\n", a, b, a % b);
            }
            break;
        default:
            printf("Invalid input. Try again kiddo.\n");
            break;
    }

    return 0;
}