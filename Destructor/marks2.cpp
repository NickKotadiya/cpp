#include<iostream>
using namespace std;

class marks
{
    int eng,stat,guj,total;
    float per;
    string name;
    public:
    marks()
    {
        cout<<"Enter a name : ";
        cin>> name;
        cout << "Enter English marks : ";
        cin >> eng;

        cout << "\nEnter Gujrati marks : ";
        cin >> guj;

        cout << "\nEnter stat marks : ";
        cin >> stat;        

        total = eng + guj + stat;
        cout<<total<<"\n";

        per = (total*100)/300;
        cout<<per<<"\n";
    }
    ~marks()
    {
        cout<<name<<"\n"<<"object is being destructed"<<"\n";
    }
};

int main()
{
    
    marks p1,p2,p3;


    return 0;
}
