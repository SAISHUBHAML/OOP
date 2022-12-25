#include<iostream>
using namespace std;
class human
{
    public:
        void breathing() {cout<<"i am breathing "<<endl;}
};
class youtuber : public human
{
    public:
    void work() {cout<<"creating videos"<<endl; };
};
class engineer : public human
{
    public:
    void work() {cout<<"work on project"<<endl;};
};
class doctor : public human
{
    public:
    void work() {cout<<"safe life"<<endl;};
};
int main()
{
    youtuber y;
    y.breathing();y.work();
    engineer e;
    e.breathing();e.work();
    doctor d;
    d.breathing();d.work();
    return 0;
}