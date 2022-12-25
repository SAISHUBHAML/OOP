#include<iostream>
using namespace std;
class animal
{
    private:
        int dogs = 10;
    public:
        void data()
        {
            cout<<"The no.of dogs are: "<<dogs;
        }
    friend 
        // void data1(animal &ani);
        void data1(animal &ani);
};

void data1(animal &ani)
{
    ani.dogs = 20;
}

int main()
{
    animal aniobj;
    data1(aniobj);
    aniobj.data();
}