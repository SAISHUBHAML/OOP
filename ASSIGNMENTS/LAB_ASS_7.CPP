#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string country;
    int population;
    char ans = 'y';
    int choice;
    map<string,int> m;
    map<string,int>::iterator i;
    do
    {
        cout<<"\nMain Menu";
        cout<<"\n1. Insert an element ";
        cout<<"\n2. Display";
        cout<<"\n3. Search a State";
        cout<<"\n\nEnter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1 : 
                cout<<"\nEnter the name of state : ";
                cin>>country;
                cout<<"\nEnter the population in crores : ";
                cin>>population;
                m.insert(pair<string,int>(country,population));
                break;
            case 2 : 
                cout<<"States and populations are : ";
                for (i=m.begin();i != m.end();i++)
                    cout<<"["<<(*i).first<<","<<(*i).second<<"]";
                break;
            case 3 : 
                cout<<"\nEnter the name of state for searching it's population : ";
                cin>>country;
                if(m.count(country) != 0)
                    cout<<"Population is "<<m.find(country)->second<<"Cr";
                else
                    cout<<"State is not present in the list"<<endl;
                break;
        }
        cout<<"\nDo you want to continuel? (y/n) : ";
        cin>>ans;
    }
    while(ans == 'y' || ans == 'Y');
    return 0;
}