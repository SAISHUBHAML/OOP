#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //creating the array of 
    //type char of name "v" and size 10
    vector<char> v(10);
    int i;
    //printing the size of the array 
    cout<<"size of array is : "<<v.size()<<endl;
    //storing alphabets to vector
    for (i=0;i<10;i++)
        v[i] = i + 'A';
    //display the content of the vector
    cout<<"Elements of the vector are : ";
    for (i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    //inserting elements to the vector
    for(i=0;i<5;i++)
        v.push_back(i + 10 + 'A');
    //displaying the size of vector
    cout<<"new size of vector : "<<v.size()<<endl;
    //displaying the content in the vector
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    //deleting the last 5 elements of the vector
    cout<<"\ndeleting the last 5 elements of the vector"<<endl;
    for(i=0;i<5;i++)
        v.pop_back();//remove the last element
    //displaying the content in the vector
    cout<<"\nthe content in the vector is : ";
    for(i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    //displaying the size of teh vector
    cout<<"the size of the vector is : ";
    cout<<v.size()<<endl;
    cout<<"END OF THE PROGRAM"<<endl;
}