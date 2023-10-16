#include <iostream>
using namespace std;

class mark
{
    int maths, english, gujrati, total, per;


public:

    mark()
    {
        cout << "enter maths sub marks:";
        cin >> maths;

        cout << "enter englissh sub marks:";
        cin >> english;

        cout << "enter gujrati sub marks:";
        cin >> gujrati;

        total = english + maths + gujrati;
        cout << "total:" << total << endl;

        
    }


   mark(int m)
    {
        per = total * 100 / 300;
        cout << "percantage:" << per << endl;
        /*cout << "maths mark:" << maths << endl;
        cout << "english mark:" << english << endl;
        cout << "gujrati mark:" << gujrati << endl;
        cout << "total mark:" << total << endl;
        cout << "per:" << per << endl;*/
    }
};


int main()
{
    mark();
}