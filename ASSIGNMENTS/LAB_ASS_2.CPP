
#include <iostream>
using namespace std;
class Marketing{
    private:
        string title;
        float price;
    public:
        Marketing() //constructor
        {
            title="";
            price=0.0;
        }
        Marketing(string title, float price)
        {
            this->title=title;
            this->price=price;
        }
        void getData(){
        cout<<"\nEnter title and price: \n";
        cin>>title>>price;
    }
    void putData(){
        try{
            if(title.length()<3)
            throw title;
            if(price<=0.0)
            throw price;
        }
        catch(string){
            cout<<"\nError: Title below 3 characters is not allowed";
            title="";
        }
        catch(float f){
            cout<<"\nError: Price not valid: \t"<<f;
            price=0.0;
        }
        cout<<"\nTitle: "<<title;
        cout<<"\nPrice: "<<price;
    }

};
class Book: public Marketing{
    private:
        int pages;
    public:
        Book():Marketing()
        {
            pages=0;
        }
        Book(string title, float price, int pages):Marketing(title,price)
        {
            this->pages=pages;
        }
    void getData(){
        Marketing::getData();
        cout<<"\nEnter no. of pages in book: \n";
        cin>>pages;
    }
    void putData(){
        Marketing::putData();
        try
    {
    if(pages<=0)
        throw pages;

    }
    catch(int f)

    {
    cout<<"\nError: Pages not valid: \t"<<f;
    pages=0;
    }

    cout<<"\nPages: "<<pages;
    }

};

class Cassette: public Marketing
{
private:
    float playtime;
public:
    Cassette():Marketing()
    {
        playtime=0.0;
    }
    Cassette(string title, float price, float playtime):Marketing(title,price)
    {
        this->playtime=playtime;
    }

    void getData()
    {
        Marketing::getData();
        cout<<"\nEnter play time of Audio Cassette: \n";
        cin>>playtime;
    }

    void putData()
    {
        Marketing::putData();
    try
    {
        if(playtime<=0.0)
            throw playtime;

        }
        catch(float playtime)
        {
            cout<<"\nError: Playtime not valid: \t"<<playtime;
            playtime=0.0;
        }
        cout<<"\nPlaytime: "<<playtime;
    }

};

int main()

{
Book book;
Cassette cassette;
cout<<"\n------BOOK------\n";
book.getData();
cout<<"\n------AUDIO CASSETTE------\n";
cassette.getData();
cout<<"\n------BOOK------";
book.putData();
cout<<"\n\n------AUDIO CASSETTE------";
cassette.putData();
return 0;
}
/*
#include<iostream>
using namespace std;
class marketing
{
    private :
        string title;
        float price;
    public:
    marketing()
    {
        title="";
        price=0.0;
    }
    marketing(string title, float price)
    {
        this->title=title;
        this->price=price;
    }    
    void getdata()
    {
        cout<<"\nEnter the title and price : ";
        cin>>title>>price;
    }
    void putdata()
    {
    try
    {
        if(title.length()<3)
        throw title;
        if(price<=0.0)
        throw price;
    }
    catch(string)
    {
        cout<<"\n Error : title below 3 characters is not allowed. ";
        title="";
    }
    catch(float f)
    {
        cout<<"\n Error : price not valid : "<<f;
        price=0.0;
    }
    cout<<"\n Title : "<<title;
    cout<<"\nprice  : "<<price;
    }
};
class book: public marketing{
    private:
        int pages;
    public:
        book():marketing()
    {
        pages=0;
    }
    book(string title, float price, int pages):marketing(title,price)
    {
        this->pages=pages;
    }
    void getdata()
    {
        marketing :: getdata();
        cout<<"\nEnter no.of pages in book : ";
        cin>>pages;
    }
    void putdata()
    {
        marketing::putdata();
        try
        {
            if(pages<0)
            throw pages;
        }
        catch (int f)
        {
            cout<<"Errow : pages not valid : "<<f;
            pages=0;
        }
        cout<<"\n pages : "<<pages;
    }
};
class cassette: public marketing
{
    private:
    float playtime;
    public:
    cassette():marketing()
    {
        playtime=0.0;
    }
    cassette(string title,float price, float playtime ): marketing(title,price)
    {
        this->playtime=playtime;
    }
    void getdata()
    {
        marketing:: getdata();
        cout<<"\n Enter play time of audio cassete : ";
        cin>>playtime;
    }
    void putdata()
    {
        marketing ::putdata();
        try
        {
            if(playtime<0.0)
            throw playtime;
        }
        catch(float f)
        {
            cout<<"\n erroe : playtime not valid : "<<f;
            playtime =0,0;
        }
        cout<<"\n playtime : "<<playtime;
    }
};
int main()
{
    book Book;
    cassette Cassette;
    cout<<"\n -----BOOK-----\n";
    book.getdata();
    cout<<"\n------AUDIO CASSETTE----\n";
    cassette.getdata();
    cout<<"\n-------BOOK-------\n";
    Book.putdata();
    cout<<"\n\n-------AUDIO CASSETTE------";
    Cassette.putdata();
    return 0;
}












*/