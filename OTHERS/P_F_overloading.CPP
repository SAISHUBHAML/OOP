/*Function Overloading
Function overloading occurs when we have many functions with similar names but different arguments. 
The arguments may differ in terms of number or type. */
#include<iostream>
using namespace std ;
void test(int i)
{
    cout<<"the int is " <<i<<endl;
}
void test(double f)
{
    cout<<"the float is " <<f<<endl;
}
void test(const char *ch) {
	cout << " The char is " << ch << endl;
}

int main() {
	test(5);
	test(5.5);
	test("five");
	return 0;
}