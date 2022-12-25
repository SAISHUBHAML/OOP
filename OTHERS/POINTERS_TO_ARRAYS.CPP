/*
#include<iostream>
using namespace std;
int main()
{
    int *arr[5];//declaration
    int a=10, b = 20, c = 30;
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    for (int i=0;i<3;i++)
    {
        cout<<"the ptr ["<<i<<"]"<<"points to "<<*arr[i]<<endl;//here *arr[i] gives the values stored 
    }
        cout<<"the base value is address is "<<arr<<endl;//gives the bases value address
    for (int i=0;i<3;i++)
    {
        cout<<"the address of ["<<i<<"] is "<<arr[i]<<endl;//here arr[i] gives the address 
    }
}
*/
#include <iostream>
using namespace std;
// function declaration
void swap(int &x, int &y);

int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
 
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;

   /* calling a function to swap the values using variable reference.*/
   swap(a, b);

   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
 
   return 0;
}