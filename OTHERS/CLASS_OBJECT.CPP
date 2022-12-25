#include<iostream>
using namespace std;
class artificial_intelligence_and_data_science
{
    public : //access specifier
        int a;//data member 
        void call()//member function
        {
            cout<<"The output is: "<<a<<endl;
        }
} ;
int main()
{
    artificial_intelligence_and_data_science aids;//declare an obj of class student
    aids.a = 10;//accesing data memberD
    aids.call();//accesing member function
    return 0;
}