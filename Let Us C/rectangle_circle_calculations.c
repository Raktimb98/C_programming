/* The length and breadth of a rectangle and radius of a circle are input through the keyboard, Write a program to calculate the area and perimeter of the rectangle and the area and circumference of the circle. */

#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
    float length, width, radius;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float rectangle_area = length * width;
    float rectangle_perimeter = 2 * (length + width);
    float circle_area = PI * pow(radius, 2);
    float circle_circumference = 2 * PI * radius;

    printf("\nRectangle:\n");
    printf("Area: %.2f\n", rectangle_area);
    printf("Perimeter: %.2f\n", rectangle_perimeter);

    printf("\nCircle:\n");
    printf("Area: %.2f\n", circle_area);
    printf("Circumference: %.2f\n", circle_circumference);

    return 0;
}