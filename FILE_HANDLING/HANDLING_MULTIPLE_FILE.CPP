#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream obj;//creating the file for writing
    obj.open("sample.txt");//writing the data to the file 
    obj<<"SAI \n";
    obj<<"SHUBHAM \n";
    obj<<"LAISETTI\n";
    obj.close();//closing the file
    obj.open("dept.txt");//writing the data into the file
    obj<<"AI & DS \n";
    obj<<"SE \n";
    obj.close();
    char data[80];
    ifstream in_obj;
    in_obj.open("sample.txt");
    cout<<"student\n";
    while(in_obj)
    {
        in_obj.getline(data,80);
        cout<<"\n"<<data;
    }
    in_obj.close();
    in_obj.open("dept.txt");
    cout<<"2021 \n";
    while (in_obj)
    {
        in_obj.getline(data,80);
        cout<<"\n"<<data;
    }
    in_obj.close();
    return 0;
}