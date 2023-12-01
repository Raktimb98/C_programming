#include <stdio.h>

void fahrenheit();
void centigrade();
void kelvin();

int main()
{
    char dialog;
    printf("Enter f for Fahrenheit or c for Centigrade and k for kelvin:");
    scanf(" %c", &dialog);
    if (dialog == 'f')
    {
        fahrenheit();
    }
    else if (dialog == 'c')
    {
        centigrade();
    }
    else if (dialog == 'k')
    {
        kelvin();
    }
    else
    {
        printf("Wrong type of value!");
    }

    return 0;
}

void fahrenheit()
{
    float temp1, value;
    printf("Enter the temperature in Fahrenheit:");
    scanf("%f", &temp1);
    value = (temp1 - 32) * 5 / 9;
    printf("The current temperature is %f Celsius\n", value);
}

void centigrade()
{
    float temp2, value2;
    printf("Enter the temprature in centigrade:");
    scanf("%f", &temp2);
    value2 = (temp2 * 9 / 5) + 32;
    printf("The current temprature is %f centigrade\n", value2);
}
void kelvin()
{
    char dialog;
    printf("From which scale you want to convert c for centigrade or f for Fahrenheit:");
    scanf(" %c", &dialog);
    if (dialog == 'c')
    {
        float temp3, value3;
        printf("Enter the temperature in kelvin:");
        scanf("%f", &temp3);
        value3 = temp3 + 273.15;
        printf("The current temperature is %f Kelvin\n", value3);
    }
    else if (dialog == 'f')
    {
        float temp4, value4;
        printf("Enter the temperature in kelvin:");
        scanf("%f", &temp4);
        value4 = (temp4 - 32) * 5 / 9 + 273.15;
        printf("The current temperature is %f Kelvin\n", value4);
    }
    else
    {
        printf("Something went wrong!");
    }
}