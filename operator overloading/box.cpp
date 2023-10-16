#include<iostream>
using namespace std;
class box
{
    int l,w,h;
public:
    void setdata(int a, int b, int c)
    {
        l = a;
        w = b;
        c = h;
    }
    int getdata()
    {
        return l*w*h;
    }
    box operator+(box &n)
    {
        box t;
        t.l = l + n.l;
        t.w = w + n.w;
        t.h = h + n.h;
        return t;
    }
};

int main()
{
    box b1 ,b2, b3;
    b1.setdata(2,2,2);
    cout<< "Volume of box b1 is :"<<b1.getdata()<<endl;
    b2.setdata(3,3,3);
    cout<<"Vloume of box b2 is :"<<b2.getdata()<<endl;

    b3 = b1+b2;
    cout<<"Vloume of box b3 is :"<<b3.getdata()<<endl;
}
 
