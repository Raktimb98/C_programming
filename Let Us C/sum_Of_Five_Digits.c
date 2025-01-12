/* if a 5 digit number is input through the keyboard. Write a programme to calculate some of its digit hint: Use the modular operator */
#include <stdio.h>
int main(){
    int number, digit , sum = 0;
    printf("Enter a 5 digit number: ");
    scanf("%d", &number);
    while (number > 0){
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
    }
    printf("The sum of the digits of the number is: %d", sum);
    return 0;
}