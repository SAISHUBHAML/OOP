#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char arr[100];
    cout<<"enter the name and age : "<<endl;
    cin.getline(arr,100);
    cout<<"\n";


    ofstream myfile("sample3.txt",ios::app);
    myfile<<arr;
    myfile.close();
    cout<<"file write operation performed successfully"<<endl;
    
    cout<<"reading from file ooperation started "<<endl;
    char arr1[100];
    ifstream obj("sample3.txt");
    obj.getline(arr1,100);
    cout<<"array content : "<<arr1<<endl;
    obj.close();
    cout<<"file read ooperation completed"<<endl;
    return 0;
}