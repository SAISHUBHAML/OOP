#include<iostream>
using namespace std;
int main(){
    float var1,var2,var3;
    cout<<"Enter the dividend : ";
    cin>>var1;
    cout<<"\nEnter the divisor : ";
    cin>>var2;
    try{
        if(var2 !=0)//checking wether the divisor is zero
        {
            var3 = var1/var2;
            cout<<"Outcome : "<<var3<<endl;
        }
        else
        {
            throw (var2);//throwing the exception handling
        }
    }
    catch(float exc)
    {
        cout<<"\n\nDivision with zero is infinity please try again\n\n";
    }
    
}