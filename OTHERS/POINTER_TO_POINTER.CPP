#include<iostream>
using namespace std;
int main()
{
    int a;//declaration
    int *ptr;//       "
    int **pptr;//      "
    ptr = &a;//initialization ptr points to a
    pptr = &ptr;//pptr points to ptr
    *ptr = 10;//ptr = 10 similar to a = 10
    cout<<"the value of a in *ptr is : "<<a<<endl;
    **pptr = 20;//pptr = 20 similar to a = 20 
    cout<<"the value of the a in **ptr is : "<<a<<endl;
    a = 30;//assigning value to a 
    cout<<"the value of the a : "<<a<<endl;//printing the value of a 
    return 0;
}