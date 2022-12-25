#include<iostream>
using namespace std;
class poly{
    protected:
        int w,h;
    public: 
        void set_val(int  a, int b){w = a, h = b;}
};
class rect:public poly{
    public:
        int area()
        {
            return w*h;
        }
};
class tri:public poly{
    public: 
        int area(){return w*h/2;}
};
int main(){
    rect r1;
    tri t1;
    poly *p1 = &r1;
    poly *p2 = &t1;
    p1->set_val(4,5);
    p2->set_val(4,4);
    cout<<r1.area()<<"\n";
    cout<<t1.area()<<"\n";
    return 0;
}