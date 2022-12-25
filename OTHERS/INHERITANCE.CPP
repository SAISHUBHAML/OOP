//protected 
//public
//private
#include<iostream>
using namespace std;
class base
{
    public:
    int x;
};
class derived : public base
{
    public:
    void print() {cout<< x <<endl;}
};
int main()
{
    derived d;
    d.print();
    return 0;
}
//----------------------------------------------------------------
//BASE CLASS      DERIVED CLASS  DERIVED CLASS     DERIVED CLASS  |
//----------------------------------------------------------------
//                PUBLIC         PRIVATE           PROTECTED      |
//----------------------------------------------------------------
//PRIVATE         NOT INHERITED  NOT INHERITED     NOT INHERITED  |
//----------------------------------------------------------------
//PROTECTED       PROTECTED      PRIVATE           PROTECTED      |
//----------------------------------------------------------------
//PUBLIC          PUBLIC         PRIVATE           PROTECTED      |
//----------------------------------------------------------------