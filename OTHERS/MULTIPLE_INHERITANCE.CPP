#include<iostream>
using namespace std;
class apple//class one initiating
{
    public:
        apple() { cout<<"apple"<<endl;}
};
class banana {//class two initiating 
    public:
        banana() { cout<<"banana"<<endl;}
};
class orange {//classs three initiating
    public:
        orange() { cout<<"orange"<<endl;}
};
class grapes :public orange, public banana, public apple{//we are calling 
//which function in order 
    public:
        grapes() {cout<<"grapes"<<endl;}
};
int main()//calling the main function
{
    grapes g;
    return 0 ;
}