#include<iostream>
#include<deque>
using namespace std;
int main()
{
    int item;//creating item of type integer
    char ans = 'y';
    int choice;
    deque<int>dq;
    deque<int>::iterator i;
    do
    {
        cout<<"Implementing Deque";
        cout<<"\nMain Menu";
        cout<<"\n1. insert from rear";
        cout<<"\n2. insert from front";
        cout<<"\n3. remove from front";
        cout<<"\n4. remove from rear";
        cout<<"\n5. size of deque : ";
        cout<<"\n6. display the elements";
        cout<<"\nENTER YOUR CHOICE : ";
        cin>>choice;
        switch(choice)
        {
        case 1 :
            //inserting elements from the back
            cout<<"enter the elements to be inserted at the back : ";
            cin>>item;
            dq.push_back(item);
            break;
        case 2 :
            //inserting elements to the front of the deque
            cout<<"enter the elements to be inserted in  front end : ";
            cin>>item;
            dq.push_front(item);
            break;
        case 3 :
            //remove elements from the front 
            cout<<"remove element in the front ";
            dq.pop_front();
            cout<<"the deleted element is : "<<item;
            break;
        case 4 : 
            //remove elements at the end 
            cout<<"remove element at the end ";
            item = dq.back();
            dq.pop_back();
            cout<<"the deleted element is : "<<item;
            break;
        case 5 : 
            //displaying the size of the deque
            cout<<"size of deque : ";
            cout<<"the size of the deque is : "<<dq.size();
            break;
        case 6 : 
            //displaying the elemrnts in the deque 
            cout<<"the elements in deque is : ";
            for(i=dq.begin();i != dq.end();i++)
                cout<<*i<<" ";
            break;
        default:
            cout<<"END OF THE PROGRAM ";
        }
        cout<<"\ndo you want to continue? (y/n) : ";
        cin>>ans;
    }while(ans == 'y' || ans == 'Y');
}