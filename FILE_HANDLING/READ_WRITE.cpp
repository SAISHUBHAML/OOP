#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char data[100];
    ofstream outfile;
    outfile.open("sample2.txt");//opening the file to write
    cout<< "writing to the file "<<endl;
    cout<< " enter the name : ";
    cin.getline(data, 100);//taking the input as data
    outfile<<data<<endl;//write input data into the file 
    outfile.close();//closing the opened file
    ifstream infile;//opening the file to read
    infile.open("sample2.txt");
    cout<<"reading from the file "<<endl;
    infile>>data;
    //cin.getline(data, 100);
    cout<<data<<endl;//writing the data into the output screen
    infile.close();//close the opened file
    return 0;
}