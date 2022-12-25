#include<stdio.h>
char fun();
int main()
{
    char c =fun();
    printf("character is : %c \n",c);
}
char fun()
{
    return 'a';
}