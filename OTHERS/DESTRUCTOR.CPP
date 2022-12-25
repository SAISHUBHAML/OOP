#include <iostream>
using namespace std;
class HelloWorld{
public:
    //Destructor
    ~HelloWorld()
    {
        cout<<"Destructor is called"<<endl;
    }
    //Constructor
    HelloWorld()
    {
        cout<<"Constructor is called"<<endl;
    }
    //Member function
    void display()
    {
        cout<<"Good Morning Awesome Day"<<endl;
    }
};
// Here even after the destructor is called early it is executed at the end 
// because the destructor is used to delocated the memory which is been occupied
// so first it will let other function execute and the destructor will run at the end to delocate the memory

int main(){
   //Object created
   HelloWorld obj;
   //Member function called
   obj.display();
   return 0;
}