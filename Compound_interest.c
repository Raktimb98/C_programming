#include <stdio.h>
#include <math.h>

int main()
{
    double principal, rate, time, compoundInterest;
    int compFreq;

    // Input the principal amount, interest rate, compounding frequency, and time period
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in decimal form): ");
    scanf("%lf", &rate);

    printf("Enter compounding frequency per year: ");
    scanf("%d", &compFreq);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Calculate compound interest
    compoundInterest = principal * pow(1 + (rate / compFreq), compFreq * time) - principal;

    // Print the result
    printf("Compound Interest = %.2lf\n", compoundInterest);

    return 0;
}

// You can compile and run this program to calculate compound interest based on your inputs.
