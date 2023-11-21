#include <stdio.h>
int main(void)
{
    int n, fact = 1;
    printf("Enter a number:-");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Final factorial is %d", fact);
    return 0;
}