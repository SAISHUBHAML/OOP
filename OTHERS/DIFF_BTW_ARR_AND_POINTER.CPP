#include<iostream>
using namespace std;
void pointer(char* ch, int a)
{
    cout<<"the element ["<<a<<"] points to "<<*(ch+a)<<endl;//here we use *(ch + 4) coz adding pointer + index
}
int main()
{
    char arr[] = {'a', 'b', 'c','d'};
    char *p = arr;
    cout<<"the size of arr is : "<<sizeof(arr)<<endl;
    cout<<"the pointer size is : "<<sizeof(p)<<endl;
    cout<<"the first element in array is : "<<arr[0]<<endl;
    cout<<"the first element in pointer is : "<<*p<<endl;
    cout<<"the second element in array is : "<<arr[1]<<endl;
    cout<<"the second element in pointer is : "<<*(p + 1)<<endl;
    pointer(p,2);
    pointer(p,3);
    return 0;
}