#include <stdio.h>
float temp(float c);
int main()
{
    float a;
    printf("Enter a num:");
    scanf("%f", &a);
    printf("Temprature is %f\n", temp(a));
}
float temp(float c)
{
    int fer = (c * 9.0 / 5.0) + 32;
    return fer;
}