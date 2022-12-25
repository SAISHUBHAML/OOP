#include<iostream>
#include<set>
using namespace std;
int main()
{
    int item,count;
    char ans = 'y';
    int choice;
    set<int> s;
    set<int>::iterator i;
    do
    {
        cout<<"Implementing the SET using associative container ";
        cout<<"\nMain Menu";
        cout<<"\n1. Insert the element";
        cout<<"\n2. Delete an element ";
        cout<<"\n3. Get the size of SET";
        cout<<"\n4. Search an element ";
        cout<<"\n5. Display";
        cout<<"\nEnter your choice : ";
        cin>>choice;
        switch(choice)
        {
        case 1 : //entering the elements to the set 
            cout<<"Enter the element to be inserted : ";
            cin>>item;
            s.insert(item);
            break;
        case 2 ://deleting the elements from the set
            cout<<"Enter the element to be deleted : ";
            cin>>item;
            s.erase(item);
            break;
        case 3 : //displaying the size of set
            cout<<"the size of the set is : "<<s.size();
            break;
        case 4 : //searching the element in set
            cout<<"Enter the element you want to search : ";
            cin>>item;
            i = s.find(item);
            if (i != s.end())
                cout<<"found ";
            else 
                cout<<"not found ";
            break;
        case 5 ://displaying the content present in the set 
            cout<<"Elements in the set are : ";
            for (i=s.begin();i != s.end();i++)
                cout<<*i<<" ";
            break;
        default:
            cout<<"NO OPTION CHOSEN";
        }
        cout<<"\ndo you want to continue? (y/n)";
        cin>>ans;
    }
    while (ans == 'y' || ans == 'Y');
}