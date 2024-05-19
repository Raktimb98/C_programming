#include <stdio.h>
int main(void)
{
    // float a = 12.5;
    // double b = 43.443;
    // printf("%f\n",a);
    // printf("%.1f\n",b);
    // printf("%lu\n", sizeof(a));
    // printf("%lu", sizeof(b));
    // for(char ch = 'a'; ch<='z';ch++){
    //     printf("%c\t",ch);
    // }
    // printf("Enter a number:-");
    // int num;
    // scanf("%d",&num);
    // int i = 0;
    // while (i<= num)
    // {
    //     printf("%d\t",i);
    //     i++;
    // }
    // int i =1;
    // do
    // {
    //     printf("%d\t",i);
    //     i++;
    // } while (i<=5);
    // int num;
    // printf("Enter a number:-");
    // scanf("%d",&num);
    // int sum=0;
    // for(int i=0;i<=num;i++){
    //     sum+=i;
    // }
    // printf("Sum of first %d natural numbers is %d",num,sum);
    int n;
    do
    {
        printf("Enter a number:- ");
        scanf("%d", &n);
        if (n % 2 != 0)

        {
            break;
        }

    } while (1);
    return 0;
}