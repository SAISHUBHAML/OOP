#include<iostream>
using namespace std;
class student
{
    public : //access specifier
        int a;//data member 
        void call(int a)//member function
        {
            cout<<a<<endl;
        }
} ;
int main()
{
    student c, *ptr;//declaring a pointer pointing to object "c" of class student
    ptr = &c;//assigning the address to the object "c"
    //c.a = 10;//accesing data member
    ptr->call(13);//accesing member function using pointer
    return 0;
}