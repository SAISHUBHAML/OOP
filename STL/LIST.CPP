#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> lst;//creating an empty list with name lst
    int i, n, item;
    //storing the elements in the list
    cout<<"how many elements you want to enter? ";
    cin>>n;
    cout<<"enter the elements : ";
    for(i=0;i<n;i++)
    {
        cin>>item;
        lst.push_back(item);
    }
    //displaying the size of the list 
    cout<<"\nthe size of the list is : "<<lst.size();
    //displaying the content of the list 
    cout<<"\nthe elements in the list are : ";
    list<int>::iterator ptr = lst.begin();
    while(ptr != lst.end())
    {
        cout<< *ptr << " ";//accessing the content using itereator 
        ptr++;
    }
    //sorting the contents of the list 
    lst.sort();
    //displaying the sorted list 
    cout<<"\nlist after sorting : ";
    ptr = lst.begin();
    while(ptr != lst.end())
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    //modifying the list 
    ptr = lst.begin();
    while(ptr != lst.end())
    {
        *ptr = *ptr + 100;
        ptr++;
    }
    //displaying the list using iterator
    cout<<"\nModified elements of the list are : ";
    ptr = lst.begin();
    while(ptr  != lst.end())
    {
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
    return 0; 
}