#include<iostream>
using namespace std;
class animal
{
    public:
    // This is parameterized constructor 
    animal(int a, int b, int c, int d)
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: "<<c<<endl;
        cout<<"The value of d is: "<<d<<endl;

    }
};

int main()
{
    animal ani(10, 20, 30, 40);
}



// This is default constructor
    // animal()
    // {
    //     cout<<"I am default constructor";
    // }