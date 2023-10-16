#include<iostream>
using namespace std;

class marks
{
    int eng,stat,guj,total;
    float per;
public:
    marks()
    {
        int e = eng , s = stat , g = guj , t = total;
        float p = per;
    }
    void setmark(int e, int s, int g)
    {
        eng = e, stat =s, guj = g; 

    }
    int totalmark(int e, int s, int g)
    {
        total = e + s + g;
        cout<<total;
    }
    int percentage(int t)
    {
        per = (total*100)/300;
        cout<<per;
    }
    /*int getmark()
    {
        cout<<eng<<"\n"<<stat<<"\n"<<guj<<endl<<"\n";
    }*/
    ~marks()
    {
        cout<<"marks";
    }
};

int main()
{
    int e,s,g,t;
    float p;

    cout << "Enter English marks : ";
    cin >> e;

    cout << "\nEnter Gujrati marks : ";
    cin >> g;

    cout << "\nEnter stat marks : ";
    cin >> s;

    marks p1;
    p1.setmark(e,s,g);
    p1.getmark();

    t = p1.totalmark(e, s, g);
    cout<<"\n";
    p = p1.percentage(t);
    cout<<"\n";

    return 0;
}
