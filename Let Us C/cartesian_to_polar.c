/* Write a program to receive cartesian co-ordinates (x.y) of a point and convert them into polar co-ordinates(r, ) */
#include <stdio.h>
#include <math.h>

void cartesian_to_polar(double x, double y, double *r, double *theta)
{
    // Calculate radius
    *r = sqrt(x * x + y * y);
    // Calculate angle in radians
    *theta = atan2(y, x);
}

int main()
{
    double x, y, r, theta;

    // Input Cartesian coordinates
    printf("Enter the x-coordinate: ");
    scanf("%lf", &x);
    printf("Enter the y-coordinate: ");
    scanf("%lf", &y);

    // Convert to polar coordinates
    cartesian_to_polar(x, y, &r, &theta);

    // Output the results
    printf("Polar coordinates:\n");
    printf("Radius (r): %.2f\n", r);
    printf("Angle (theta): %.2f radians\n", theta);

    return 0;
}