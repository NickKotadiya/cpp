#include<iostream>
using namespace std;

class circle
{
    int redius;

public:

    //constructor of class circle
    circle()
    {
        int r = redius; 
    }
        int area(int r)
        {
            cout<<3.14*r*r;
        }

        int circ(int r)
        {
            cout<<3.14*2*r;
        }
        
    //Destructor of class ~circle
    ~circle()
    {
        cout<<"Destructor is running";
    }
};

int main()
{
    int a;

    cin>>a;

    circle mycir;

    mycir.area(a);
    cout<<"\n";
    mycir.circ(a);

    return 0;
}
