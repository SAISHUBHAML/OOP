
#include<iostream>
using namespace std;
class student 
{
    private://access specifier
        int marks;//declaration
    public:
        student():marks(35) {} //constructor to initialize count 
        void operator --() //member function
        {
            --marks;
        }
    void show()
    {
        cout<<"student :"<<marks<<endl;
    }
};
int main()
{
    student s1;
    --s1;
    s1.show();
    return 0;
}

/*
// C++ program to demonstrate working of unary increment
// and decrement operators
#include <iostream>
using namespace std;

int main()
{
	// Post increment
	int a = 1;
	cout << "a value: " << a << endl;
	int b = a++;//here increment will be done after asigning value to the b
	cout << "b value after a++ : " << b << endl;
	cout << "a value after a++ : " << a << endl;

	// Pre increment
	a = 1;
	cout << "a value:" << a << endl;
	b = ++a;//here value will be addeed before assigning value to the b
	cout << "b value after ++a : " << b << endl;
	cout << "a value after ++a : "<< a << endl;

	// Post decrement
	a = 5;
	cout << "a value before decrement: " << a << endl;
	b = a--;
	cout << "b value after a-- : " << b << endl;
	cout << "a value after a-- : " << a << endl;

	// Pre decrement
	a = 5;
	cout << "a value: "<< a<<endl;
	b = --a;
	cout << "b value after --a : " << b << endl;
	cout << "a value after --a : " << a << endl;

	return 0;
}		
*/

/*
#include<iostream>
using namespace std;
class test
{
	private://access specifier
		int x;
	public://access specifier
		test() {x=0;}//constructor
		int gat_count() {return x;}//return count
		void operator --() {x--;}//decrement count
};
int main()
{
	test (c);//define and intialise
	cout<<" c = "<<c.gat_count()<<endl;//display
	--c;
	cout<<" c = "<<c.gat_count()<<endl;//display
}

*/
