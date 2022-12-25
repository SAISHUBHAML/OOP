/*
//IF THE FUNCTION DIFFERS IN PARAMETERS OR TYPES AND CAN DIFFER BOTH THEN IT IS OVERLOADING FUNCTION
#include<iostream>
using namespace std;
int func(int i);//these function differs in type of parameters 
double function(double i);//upper datatype is int and here it is double both differs
int main()
{
    cout<<func(10)<<endl;//calls the func(int i)
    cout<<function(2.4)<<endl;//calls the function(double i)
    return 0;
}
int func(int i)
{
    return i+2;
}
double function(double i)
{
    return i*i;
}
*/
//by using different number of parameters 
#include<iostream>
using namespace std;
int func(int i,int j);//these function differs in number of parameters 
int func(int i);//above two parameters were taken and here only one 
int main()
{
    cout<<func(2,3)<<endl;//calls the func(int i)
    cout<<func(4)<<endl;//calls the func(int i)
    return 0;
}
int func(int i, int j)
{
    return i+j;
}
int func(int i)
{
    return i*i;
}