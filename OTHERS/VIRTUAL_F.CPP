#include <iostream>  
using namespace std;
class ClassA {
		public:
		virtual void show() {
			cout << "The show() function in base class invoked..." << endl;
		}
	};
	class ClassB :public ClassA {
	public:
		void show() 	{
			cout << "The show() function in derived class invoked..."<<endl;
		}
	};
	int main() {
		ClassA* a;   
		ClassB b;
		a = &b;
		a->show();      
	}