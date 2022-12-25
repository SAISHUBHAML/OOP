/*//using implicit call(because automatic type casting is done)
#include<iostream>
using namespace std;
class sample
{
    int var;
    public:
        sample (int v){var = v;}
        void print()
        {
            cout<<"\n value of var is : "<<var<<endl;
        }
};
void fun(sa#include<iostream>
using namespace std;
class sample
{
    int var;
    public:
        sample (int v){var = v;}
        void print()
        {
            cout<<"\n value of var is : "<<var<<endl;
        }
};
void fun(sample s )//calling function fun with parameter as a object of sample class
{
    s.print();
}
int main()
{
    sample s1(100);
    sample s2 = 80;//not valid but it works
    fun(s1);
    fun(200);//here it will automatically called 
    return 0 ;
}
    sample s1(100);
    sample s2 = 80;//not valid but it works
    fun(s1);
    fun(200);//here it will automatically called 
    return 0 ;
}
*/
//here automated type casting is not done
#include<iostream>
using namespace std;
class sample
{
    int var;
    public:
        explicit sample (int v){var = v;}
        void print()
        {
            cout<<"value of var is : "<<var<<endl;
        }
};
void fun(sample s )//calling function fun with parameter as a object of sample class
{
    s.print();
}
int main()
{
    sample s1(100);
    //sample s2 = 80;//not valid but it works
    fun(s1);
    //fun(200);//here it will automatically called 
    return 0 ;
}