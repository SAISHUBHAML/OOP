#include<iostream>
using namespace std;
class test
{
    int value;
    public://access specifier
        test (int v = 0 ){value = v;}
        int getval() const//using the constant member function
        {
            return value;
        }
};
int main()
{
    test t(20);
    cout<<t.getval()<<endl;
    return 0;
}