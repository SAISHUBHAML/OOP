#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the numerator : ";
    cin>>a;
    cout<<"Enter the denomerator : ";
    cin>>b;
    try
    {
        if (a == 0)
            throw 'd';
        else if (b == 0){throw 1.64f;}
        else if(a < 0){throw a;}
        else
        {
            float d = (float)a / (float)b ;
            cout<<"The division of the values is : "<<float(d)<<endl;
        }
    }
    catch(int a)
    {
        cout<<"The division gives negative value. "<<endl;
    }
    catch(char d)
    {
        cout<<"The division of the two numbers will be zero "<<endl;
    }
    catch(float c)
    {
        cout<<"The division of the two numbers is infinity "<<endl;
    }
    cout<<"End of the program"<<endl;
    return 0;
}