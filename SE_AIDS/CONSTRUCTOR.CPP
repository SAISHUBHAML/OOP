#include<iostream>
using namespace std;
class animals
{
    public:
    int animal;
    animals()
    {
        animal = 10;
    }
    // ~animals()
    // {
    //     // This will destroy the object which is been created
    //     cout<<"Object destroyed!";
    // }
};
int main()
{
    animals dog;
    cout<<"Total animals = "<<dog.animal<<endl;
}