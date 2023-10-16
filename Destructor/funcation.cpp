#include<iostream>
using namespace std;
class solid
{
    int redius;
    int bes , hei;
    double side;

    public:
    //circle
    solid()
    {
        int r = redius; 
    }
        int area(int r)
        {
            cout<<"Ans of Circle area :"<<3.14*r*r<<"\n";
        }
    //triangle
    solid(int bes, int hei)
    {
        int b = bes , h = hei;
    }
        int area(int b , int h)
        {
            cout<<"Ans of Triangle area :"<<0.5*b*h<<"\n";
        }
    //Cude
    solid(double side)
    {
        int s = side;
    }
        int area(double s)
        {
            cout<<"Ans of Cude area :"<<6*s*s;
            cout<<"\n";
        }
    
    ~solid()
    {
        cout<<"Circle area , Triangle area , cude area \n";
    }

};

int main()
{
    int r;
    int b,h;
    double s;


    cout<<"Enter a valu of redius :";
    cin>>r;

    cout<<"Enter a valu of bes,hei :";
    cin>>b>>h;

    cout<<"Enter a valu of side :";
    cin>>s;

    solid cir;
    solid tri;
    solid sid;
    cir.area(r);
    tri.area(b,h);
    sid.area(s);

    return 0;

}