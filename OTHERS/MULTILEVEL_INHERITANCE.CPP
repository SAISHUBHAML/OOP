#include<iostream>
using namespace std;
class animal
{
    public:
    void lion () {cout<<"eats"<<endl;}
};
class tiger : public animal{};
class cheetah : public tiger{};
int main()
{
    cheetah c;
    c.lion();
    return 0;
}
