#include<stdio.h>
int main()
{
    int i =1;
    int *p = &i;//assigning the address to i to the *p
    int *q;//initialixing the pointer q with *q
    q=p;//q point the same address pointed by the p 
    *q = 6;//*q changing the value of address "i" 
    printf("%d\n",*p);//print the value at address i 
    return 0;
}//output will be 6 coz *q has changed the value 