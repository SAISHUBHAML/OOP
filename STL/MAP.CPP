#include<iostream>
#include<map>
using namespace std;
int main()
{
    int count,key;
    char ans = 'y',item;
    int choice;
    map<int,char> m;
    map<int,char>::iterator i;
    do
    {
        cout<<"Implementing MAP ";
        cout<<"\nMain Menu";
        cout<<"\n1. Insert the element";
        cout<<"\n2. Delete the element ";
        cout<<"\n3. Size of map";
        cout<<"\n4. Search an element ";
        cout<<"\n5. Display";
        cout<<"\nEnter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1 : 
                cout<<"\nEnter the key : ";
                cin>>key;
                cout<<"\nEnter the value : ";
                cin>>item;
                m.insert(pair<int,char>(key,item));
                break;
            case 2 :
                cout<<"\nEnter the key to be deleted : ";
                cin>>key;
                m.erase(key);
                break;
            case 3 : 
                cout<<"\nThe size of the element is : "<<m.size();
                break;
            case 4 : 
                cout<<"\nEnter the key for searching : ";
                cin>>key;
                if(m.count(key) == 0)
                    cout<<"\nElement is not present ";
                else
                    cout<<"\nElement "<<m.find(key)->second<<" present";
                break;
            case 5 :
                cout<<"\nElements of 'map' are ";
                for(i=m.begin();i != m.end();i++)
                    cout<<"["<<(*i).first<<(*i).second<<"]";
        }
        cout<<"\nDo you want to continue?(y/n)";
        cin>>ans;
    }
    while (ans == 'y' || ans == 'Y');
}