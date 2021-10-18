#include<iostream>
using namespace std;
class publication
{
    public:
        string title;
        float price;

    void basic_info()
    {
        cout<<"Enter Your TITLE :";
        cin>>title;

        cout<<"Enter Your Book PRICE : Rs ";
        cin>>price;
    }

    void d1()
    {
        cout<<"\n------------------------------------------------------------------------------\n";
        cout<<"TITLE : "<<title;
        cout<<"\n";
        cout<<"PRICE : Rs "<<price;
    }
};

class book:public publication
{
    public:
        int page_count;

    void page_info()
    {
        cout<<"Enter the number of PAGES :";
        cin>>page_count;
        cout<<"\n------------------------------------------------------------------------------\n";
    }

    void d2()
    {
        basic_info();
        page_info();
        
    }

    void d22()
    {
        d1();
        cout<<"\n";
        cout<<"PAGES : "<<page_count;
        cout<<"\n";
    }
};

class tape:public publication
{
    public:
        float time;
    void TimeCount()
    {
        cout<<"Enter MINUTES : ";
        cin>>time;
        cout<<"\n------------------------------------------------------------------------------\n";
    }

    void d3()
    {
        basic_info();
        TimeCount();
        
    }

    void d33()
    {
        d1();
        cout<<"MINUTES : "<<time;
        cout<<"\n";
    }
};

int main()
{
    int n,a=0,b=0;
    publication obj;
    book obj_b[100];
    tape obj_t[100];

    do
    {

        cout<<"MENU : \n ----------------------------------------- \n";
        cout<<"1. Add Book Record \n2.Display Book Record \n3. Add Casette Record \n4. Display Casette Record \n5.Exit \n------------- \n";

        
        cout<<"Enter Your Choise: ";
        cin>>n;

        switch(n)
        {
            case 1:
                obj_b[a].d2();
                a++;
                break;

            case 2:
                for(int j=0;j<a;j++)
                {
                    obj_b[j].d22();
                }
                cout<<"\n-------------------------------------------------------------\n";
                break;

            case 3:
                obj_t[b].d3();
                b++;
                break;

            case 4:
                for(int j1=0;j1<b;j1++)
                {
                    obj_t[j1].d33();
                }
                break;

            case 5:
                exit(0);
                
                

        }
       
    }
    while(n!=5);



}

