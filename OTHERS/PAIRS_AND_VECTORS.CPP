#include<iostream>
using namespace std;
int main()
{
    pair<int, string> p;
    //p = make_pair(3, "SAI");
    p = {3, "SAI"};
    pair<int, string> &p1 = p;//pair<int, string> &p1 = p; here & means reserve the address by removing the value of "p"
    p1.first = 5;
    cout<<p1.first<<" "<<p1.second<<endl;   
    cout<<p.first<<" "<<p.second<<endl;
}