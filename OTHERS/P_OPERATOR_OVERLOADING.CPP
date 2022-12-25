//operator overloading 
#include<iostream> 
using namespace std;
class ComplexNum {
private://they can only be accessed from within the class.
	int real, over;
public://that it will be accessible even from outside the class.
	ComplexNum(int rl = 0, int ov = 0 ) {
		real = rl;   
		over = ov; 
	}
	ComplexNum operator + (ComplexNum const &obj) {
		ComplexNum result;
		result.real = real + obj.real;
		result.over = over + obj.over;
		return result;
	}
	void print() { 
		cout << real << " + " << over << endl; 
	}
};
int main()
{
	ComplexNum c1(1, 2), c2(3, 7);
	ComplexNum c3 = c1+c2;
	c3.print();
}