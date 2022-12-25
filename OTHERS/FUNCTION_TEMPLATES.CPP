//function overloading
/*
#include<iostream>
using namespace std;
int add(int x, int y)
{
    return(x+y);
}
float add(float x, float y)
{
    return (x+y);
}
double add(double x, double y)
{
    return (x+y);
}
int main()
{
cout<<"addition of two numbers is "<<add(3,4)<<endl;
return 0;
}
*/
/*
#include<iostream>
using namespace std;
template <typename T>
T add(T x, T y)
{
    return (x+y);
}
int main()
{
    cout<<"addtion of the two integers 3 and 4 is : "<<add<int>(3,4)<<endl;
    cout<<"addtion of the two float numbers  3 and 4 is : "<<add<float>(3.5f,4.8f)<<endl;
    cout<<"addtion of the two double numbers 3 and 4 is : "<<add<double>(3.6,4.3)<<endl;
    return 0;
}

*/
#include<iostream>
using namespace std;
template <typename T>
T add(T x, T y)
{
    return (x+y);
}
int main()
{
    cout<<"addition of the two integers 3 and 4 is : "<<add<int>(3,4)<<endl;
    cout<<"additon of the two float numbers  3 and 4 is : "<<add<float>(3.5f,4.8f)<<endl;
    cout<<"additon of the two double numbers 3 and 4 is : "<<add<double>(3.6,4.3)<<endl;
    return 0;
}