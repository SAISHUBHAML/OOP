/*Function Overriding
Function overriding occurs when a function of the base class is given a new definition in a derived class.
 At that time, we can say the base function has been overridden.*/
#include <iostream>
using namespace std;
class Mammal {
public:
	void eat() {
		cout << "Mammals eat...";
	}
};
class Cow: public Mammal {
public:
	void eat() {
		cout << "Cows eat grass..."<<endl;
	}
};
int main(void) {
	Cow c = Cow();
	c.eat();
	return 0;
}