#include<iostream>
using namespace std;

class person
{
private:
    int age;
    string name , city;
public:
    void setname(string n)
    {
        name = n;
    }
    void setcity(string c)
    {
        city = c;
    }
    void setage(int a)
    {
        age = a;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void getcity()
    {
        cout<<city<<endl;
    }
    void getage()
    {
        cout<<age<<endl;
    }

};
int main()
{

    int a[2];
    string b[2],c[2];


    for(int i=0; i<=1; i++)
    {
        
        cout<<"Enter a age :";
        cin>>a[i];

        cout<<"Enter a name :";
        cin>>b[i];

        cout<<"Enter a city :";
        cin>>c[i];

    }

        person p1;
        p1.setage(a[0]);
        p1.setname(b[0]);
        p1.setcity(c[0]);
    
        p1.getage();
        p1.getname();
        p1.getcity();

        cout<<"\n";

        person p2;
        p2.setage(a[1]);
        p2.setname(b[1]);
        p2.setcity(c[1]);
    
        p2.getage();
        p2.getname();
        p2.getcity();

        cout<<"\n";

    return 0;
    
}
 
