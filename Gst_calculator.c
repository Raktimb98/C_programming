#include <stdio.h>

void calculatePrice(float value);

int main(void) {
    float value,gst;

    printf("Enter a value: ");
    scanf("%f", &value);
    printf ("Enter gst value");
    scanf("%d",&gst);

    calculatePrice(value);

    return 0;
}

void calculatePrice(float value) {
    float finalPrice;
    finalPrice = value + (0.18 * value);
    printf("Your final price is: %f\n", finalPrice);
}
