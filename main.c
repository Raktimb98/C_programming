#include<stdio.h>
void printString(char arr[]);
int main(void){
printf("Enter a name:- ");
char ch[100];
scanf("%s",ch);
printString(ch);
return 0;
}
void printString(char arr[]){
    for (int i = 0; arr[i] !='\0'; i++)
    {
        printf("%c",arr[i]);
    }
    
}