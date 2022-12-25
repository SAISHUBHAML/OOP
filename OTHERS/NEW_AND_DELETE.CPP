#include<iostream>
using namespace std;
int main()
{
    int *a = new int;//allocation memory to the ptr a 
    *a = 100;
    cout<<"the value stored is : "<<*a<<endl;//here * gives the value stored in *a 
    //and "a" gives the address 
    delete a;
    cout<<"the value after deleted : "<<*a<<endl;
    return 0;
}