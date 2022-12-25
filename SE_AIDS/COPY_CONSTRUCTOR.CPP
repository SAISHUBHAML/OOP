#include<iostream>
using namespace std;
class animal
{
    public:
        int dog = 10;
};
int main()
{
	animal ani1;

	animal ani2(ani1);
	cout <<"The value of ani2 is: "<<ani2.dog<<endl;
}



