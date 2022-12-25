#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("sample");
    char code[10];
    float salary;
    for(int i=0; i<5; i++)
    {
        cout<< "enter the code : " << "\n";
        cin>>code;
        fout<<code<<"\n";
        cout<<"entr salary : ";
        cin >> salary;
        fout<<salary<<"\n";
    }
    fout.close();
    ifstream fin("sample");
    for (int i=0; i<5; i++)
    {
        fin>>code;
        fin>>salary;
        cout <<"\n code : "<<code;
        cout<<"\n salary : "<<salary;
    }
    fin.close();
    return 0;
}