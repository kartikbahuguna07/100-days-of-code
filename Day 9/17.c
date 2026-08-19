//Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>
int main(){   
    float a,b,c,d,root1,root2;

    printf("A quadratic equation is as follows: a^2+b^2+c = 0.\n");
    printf("Enter the values of a,b and c = ");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    d = pow(b,2) - 4*a*c;
    
    if(d>0){
        root1 = (-b + sqrt(d))/2*a;
        root2 = (-b - sqrt(d))/2*a;
        printf("The roots are real and unequal.\n");
        printf("The roots of the equation are = %.2f and %.2f.\n",root1,root2);
    }
    else if(d == 0){
        root1 = (-b + sqrt(d))/2*a;
        printf("The roots of the equation are real and equal.\n");
        printf("The roots of the equation are = %.2f and %.2f.\n",root1,root1);
    }
    else{
        printf("The roots of the equation are unreal(imaginary).\n");
    }
    return 0;
}