#include <iostream>
using namespace std;

class marks
{
private:
    int mark, total, eng, stat, guj;
    float per;

public:
    marks()
    {
        int mark, total, eng, stat, guj;
    float per;
    }
    void setmark(int e, int s, int g)
    {
        eng = e, stat = s, guj = g;
    }
    int totalmarks(int e, int s, int g)
    {
        total = e + s + g;
        return total;
    }
    int percentage(int total)
    {
        per = total / 3;
        return per;
    }
    int getmark()
    {
        cout << eng << "\n"
             << stat << "\n"
             << guj << endl
             << "\n";
    }
};

int main()
{
    int e[2], s[2], g[2], t[2];
    float p[2];

    for (int i = 0; i <= 1; i++)
    {

        cout << "Enter English marks : ";
        cin >> e[i];

        cout << "\nEnter Gujrati marks : ";
        cin >> g[i];

        cout << "\nEnter stat marks : ";
        cin >> s[i];
    }

    marks p1;
    p1.setmark(e[0], s[0], g[0]);
    p1.getmark();

    marks p2;
    p2.setmark(e[1], s[1], g[1]);
    p2.getmark();

    for (int i = 0; i < 2; i++)
    {
        t[i] = p1.totalmarks(e[i], s[i], g[i]);
        cout << "total:" << t[i] << endl;
        p[i] = p1.percentage(t[i]);
        cout << "percentage:" << p[i] << endl;
    }
    return 0;
}