#include<iostream>
using namespace std;
class customer
{
    string name;
    mutable string placedorder;
    int tableno;
    mutable int bill;
    public :
        customer(string s, string m, int a, int p)
        {
            name = s;
            placedorder = m;
            tableno = a;
            bill = p;
        }
        void changeplacedorder(string q) const
        {
            placedorder = q;
        }
        void changebill(int a) const
        {
            bill = a;
        }
        void display() const
        {
            cout<<"customer name is : "<<name<<endl;
            cout<<"food ordred by customer is : "<<placedorder<<endl;
            cout<<"table no is : "<<tableno<<endl;
            cout<<"total payable amount is : "<<bill<<endl;
        }
};
int main()
{
    const customer c1("SAISHUBHAM LAISETTI","ICE-CREAM",3,150);
    c1.display();
    c1.changeplacedorder("gulab jammun");
    c1.changebill(200);
    c1.display();
    return 0;
}