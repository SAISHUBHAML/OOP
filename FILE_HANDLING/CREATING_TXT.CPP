#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fobj;
    fobj.open("sample.txt");
    fobj<<"I LOVE MY COUNTRY";
    fobj.close();
    return 0;
}