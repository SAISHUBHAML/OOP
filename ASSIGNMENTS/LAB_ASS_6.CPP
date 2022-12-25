/*
#include<iostream>
#include<algorithm>
using namespace std;
*/
/*
bool compare(int a, int b)
{
    return a > b;
}
*///using this to get the sorted list in descending order
/*
int main()
{
    int a,b,i,n,arr[100];
    cout<<"Enter the number of Elements : ";
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n, compare);//sort(arr,arr+n, compare); using compare keyword for instance 
    for (i=0;i<n;i++)
    {
        cout<<arr[i]<<',';
    }
    cout<<endl;
    return 0;
}
*/

#include<iostream>
#include<algorithm>
//#include<vector>
//#include<string>
using namespace std;
class student//class student declaration 
{
    public : 
        string name;
        char dob[50];
        int contact;
        
        void input()
        {
            cout<<"Enter the name : ";
            cin>>name;
            cout<<"Enter the dob : ";
            cin>>dob;
            cout<<"Enter the contact : ";
            cin>>contact;
        }
        void display()
        {
            cout<<name<<"\t";
            cout<<dob<<"\t";
            cout<<contact<<endl;
        }
};
bool compare(student s1, student s2)
{
    return (s1.name > s2.name);
}
int main()
{
    student s[100];
    string nam, name1[100];
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        s[i].input();
    }
    sort(s, s+n, compare);
    for(int i=0;i<n;i++)
    {
        name1[i] = s[i].name;
        s[i].display();
    }
    cout<<"Enter the search : ";
    cin>>nam;
    if (binary_search(name1,name1+n,nam))
        cout<<"RECORD FOUND";
    else 
        cout<<"NOT FOUND";
    return 0;
}























/*

#include <iostream>
#include <algorithm>
using namespace std;

class student{
public:
	int dob;
	long tel;
	string name;

	void input(){

			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Birth date: ";
			cin>>dob;
			cout<<"Enter telephone: ";
			cin>>tel;

	}
	void display(){

		cout<< name<<"          ";
		cout<< dob<<"           ";
		cout<<tel<<endl;

	}
};
bool camparename(student s1,student s2){
	return(s1.name > s2.name);
}
int main() {
	student s[10];
	string nm, name1[10];
	int n;
	cout<<"Enter the no of students :";
	cin>>n;
	for(int i=0;i<n;i++){

		s[i].input();

	}
	sort(s,s+n,camparename);
	cout<<"NAME     BIRTH DATE    TELEPHONE "<<endl;
	for(int i=0;i<n;i++){
		name1[i]=s[i].name;
		s[i].display();
	}
	cout<<"Enter the record to be searched";
	cin>>nm;
	if(binary_search(name1,name1+n,nm))
		cout<<"Record found";
	else
		cout<<"Record not found";
	return 0;
}






*/