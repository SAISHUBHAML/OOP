#include<iostream>
using namespace std;
class animal
{
    public:
        void eat() {cout<<"eats "<<endl;}
};
class dog : public animal
{
    public :
        void sleep() {cout<<"sleep "<<endl;}
};
int main()
{
    dog d;
    d.eat();
    d.sleep();
    return 0;
}