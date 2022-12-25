//to illustratre the binary operator overloading
/*
#include<iostream>
using namespace std;
class complex
{
    private:
        int real, imag;
    public:
        complex(int r=0, int i=0) { real = r; imag = i;}//this is automatically 
        //used when '+' is used btw two complex objects
    complex operator + (complex const &obj) 
    {
        complex res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
        return res;
    }
    void print() { cout<<real<<" + i"<<imag<<endl;}
};
int main()
{
    complex c1(10,3), c2(3,4);
    complex c3 = c1+c2;
    c3.print();
}
*/

//to illustrate the binary operator overloading
#include<iostream>
using namespace std;
class A
{
    int x;
    public :
        A(){}
        A(int i)
        {
            x = i;
        }
    void operator - (A);
    void display();
};
void A::operator - (A a)
{
    int m = x - a.x;
    cout<<"the result of the SUBTRACTION of two objects is : "<<m<<endl;
}
int main()
{
    A a1{5};
    A a2{4};
    a1 - a2;
    return 0;
}

/*

//Program to demonstrate various operations on Complex class
#include<iostream>
using namespace std;
class Complex
{
    float real,img;
public:
//Constructor
Complex()
{
    real=0;
    img=0;
}
Complex(float a,float b)
{
    real=a;
    img=b;
}
//Addition of two complex numbers
Complex operator+(Complex c1)
{
    Complex temp;
    temp.real=real+c1.real;
    temp.img=img+c1.img;
    return temp;
}
//Subtraction of two complex numbers
Complex operator-(Complex c1)
{
    Complex temp;
    temp.real=real-c1.real;
    temp.img=img-c1.img;
    return temp;
}
//Multiplication of two complex numbers
Complex operator*(Complex c1)
{
    Complex temp;
    temp.real=(real*c1.real)-(img*c1.img);
    temp.img=(img*c1.real)+(real*c1.img);
    return temp;
}
//overloaded insertion (<<) operator for class Complex
    friend ostream &operator<<(ostream &out, Complex &c)
    {
        out << c.real<<" + "<< c.img<<" i";
        return out;
    }
//overloaded extraction (>>) operator for class Complex
 
    friend istream &operator>>(istream &in, Complex &c)
    {
        in>> c.real>>c.img;
        return in;
    }
};
 
int main()
{
Complex c1,c2,c3;
int choice;
char ans;
do
{
cout<<"\n************* MENU ************\n";
cout<<"\n\t1.Addition\n\t2.Subtraction\n\t3.Multiplication\n";
cout<<"\n\nEnter your choice: ";
cin>>choice;
cout<< "Enter real and img part of first complex number\n";
cin>>c1;
cout<< "Enter real and img part of second complex number\n";
cin>>c2;
switch(choice)
{
case 1:
    c3=c1+c2;
    cout<<"\n\nAddition is: ";
    cout<<c3;
break;
case 2:
    c3=c1-c2;
    cout<<"\n\nSubtraction is: ";
    cout<<c3;
break;
case 3:
    c3=c1*c2;
    cout<<"\n\nMultiplication is: ";
    cout<<c3;
 
default:    
    cout<<"\nWrong choice";
}
    cout<<"\nDo you want to continue?(y/n): ";
    cin>>ans;
    }while(ans=='y' || ans=='Y');
return 0;
}

*/