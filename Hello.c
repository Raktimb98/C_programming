#include <stdio.h>
int sum(int num_1, int num_2);
int main(void)
{
    printf("Enter a num:-");
    int num_1;
    scanf("%d", &num_1);

    printf("Enter a num:-");
    int num_2;
    scanf("%d", &num_2);
    int s = sum(num_1 , num_2);
    printf("Your sum value:-%d\n",s);
    return 0;
}
int sum(int num_1, int num_2)
{
    return num_1 + num_2;
} 