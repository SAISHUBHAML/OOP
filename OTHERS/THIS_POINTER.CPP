//when member variable and local variable are same then we will use "this" or else not required 
#include<iostream>
using namespace std;
class pwr//creating class pwr
{
    double b;//data member
    int e;//       "
    double val;//  "
    public ://access specifier
        pwr(double base,int exp);//member variable is base and exp
        double get_pwr()//member function
        {
            return val;
        }
};
pwr :: pwr(double base, int exp)//local variable is base and exp
{
    /*
    b = base;
    e = exp;
    val = 1;
    if (exp==0) return;
    for ( ;exp>0;exp--) val = val * b;
    */
    this->b = base;//we can use this instead of the above one
    this->e = exp;
    this->val = 1;
    if (exp==0) return;
    for ( ;exp>0;exp--) 
    this->val = this->val * b;
}
int main()
{ 
    pwr x (2.0,2), y (2.5,3), z (4.7,2);
    cout<<x.get_pwr()<<" "<<endl;
    cout<<y.get_pwr()<<" "<<endl;
    cout<<z.get_pwr()<<" \n"<<endl;
    return 0;
}