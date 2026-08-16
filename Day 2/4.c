// Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main() {
    float radius, area, circumference;
    float pi = 3.14159;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;


    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
