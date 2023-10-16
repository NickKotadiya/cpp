#include<iostream>
using namespace std;

class triangle
{
    int bes , hei;
public:
    triangle()
    {
        int b = bes , h = hei;
    }
    int area(int b , int h)
    {
        cout<<0.5*b*h;
    }

    int circ(int b , int h)
    {
        cout<<3*b;
    }

};
int main()
{
    int a,b;
    cin>>a>>b;

    triangle r1;

    r1.area(a,b);
    cout<<"\n";
    r1.circ(a,b);
    
}
 
