/*
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out_obj;
    int a[5] = {10,20,30,40,50};
    int b[5];
    out_obj.open("sample4.dat");
    out_obj.write((char *)&a,sizeof(a));
    out_obj.close();
    ifstream in_obj;
    in_obj.open("sample4.dat");
    in_obj.read((char *)&b,sizeof(b));
    cout<<"\n the contents of sample4.dat file are : \n";
    for(int i=0;i<5;i++){
        cout<<" "<<b[i]<<endl;
 }   }
    in_obj.close();
    return 0;
}
*/

#include <iostream>
using namespace std;
class point
{
public:
	int x, y;
	point()
	{
		x = 0;
		y = 0;
	}
	point(int i, int j)
	{
		x = i;
		y = j;
	}
};
ostream &operator<<(ostream &st, point obj)
{
	st << obj.x << "," << obj.y << "\n";
	return st;
}
istream &operator>>(istream &st, point &obj)
{
	cout << " Enter x = ";
	st >> obj.x;
	cout << " Enter y = ";
	st >> obj.y;
	return st;
}
int main()
{
	point a, b;
	cin >> a >> b;
	cout << "\n first point = ";
	cout << a;
	cout << "\n second point = ";
	cout << b;
	return 0;
}
