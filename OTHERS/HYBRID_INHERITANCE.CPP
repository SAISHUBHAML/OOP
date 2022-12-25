//hybrid inheritance
//combination of multiple and hierarchical inheritance is calleld ingheritance
#include<iostream>
using namespace std;
class student{
    public:
        void studying() {cout<<"i am studying"<<endl;}
};
class male{};
class female{};
class boy : public student, public male{};
class girls : public student, public female{};
int main(){
    boy b;
    b.studying();
    girls g;
    g.studying();
    return 0;
}
