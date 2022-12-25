#include<iostream>
using namespace std;
class Complex
{
    float real,imaginary;
    public:
        //constructor
        Complex()
        {
            real = 0;
            imaginary = 0;
        }
        Complex(float a, float b)
        {
            real = a;
            imaginary = b;
        }
        //addition of two numbers
        Complex operator+(Complex c1)
        {
            Complex temp;
            temp.real = real+c1.real;
            temp.imaginary = imaginary+c1.imaginary;
            return temp;
        }
        //substraction of two Complex numbers
        Complex operator-(Complex c1)
        {
            Complex temp;
            temp.real = real-c1.real;
            temp.imaginary=imaginary-c1.imaginary;
            return temp;
        }
        //multiplication of two numbers
        Complex operator*(Complex c1)
        {
            Complex temp;
            temp.real = (real*c1.real)-(imaginary*c1.imaginary);
            temp.imaginary = (imaginary*c1.real)+(real*c1.imaginary);
            return temp;
        }
        //overloaded insertion (<<) operator for class Complex
        friend ostream &operator<<(ostream &out, Complex &c)
        {
            out<<c.real<<"+"<<c.imaginary<<"i";
            return out;
        }
        //overloaded vextraction (>>) ooperator for class Complex
        friend istream &operator>>(istream &in, Complex &c)
        {
            in>>c.real>>c.imaginary;
            return in;
        }

};
int main()
{
    Complex c1,c2,c3;
    int choice;
    char ans;
    cout<<"************menu**********";
        cout<<"\n 1. ADDITION \n 2. SUBSTRACTION \n 3. MULTIPLICATION \n";
        cout<<"Enter the choice : ";
        cin>>choice;
        cout<<"Enter the real and imaginary part of the first Complex number : ";
        cin>>c1;
        cout<<"Enter the real and imaginary part of the second Complex number : ";
        cin>>c2;
    do
    {
        
        switch(choice)
        {
            case 1:
                c3 = c1 + c2;
                cout<<"\n ADDITION is : ";
                cout<<c3;
            break;
            case 2:
                c3 = c1 - c2;
                cout<<"\n SUBTRACTION is : ";
                cout<<c3;
            break;
            case 3:
                c3 = c1 * c2;
                cout<<"\n MULTIPLICATION is : ";
                cout<<c3;
                break;
            default:
                cout<<"\n WRONG CHOICE ";
            cout<<"************menu**********";
            cout<<"\n 1. ADDITION \n 2. SUBSTRACTION \n 3. MULTIPLICATION \n";
            cout<<"Enter the choice : ";
            cin>>choice;
            cout<<"Enter the real and imaginary part of the first Complex number";
            cin>>c1;
            cout<<"Enter the real and imaginary part of teh second Complex number";
            cin>>c2;
        }
        cout<<"\n DO YOU WANT TO CONTINUE ? (Y/N) : ";
        cin>>ans;
    }
    while (ans == 'y' || ans == 'Y');
    return 0;
}