#include <iostream>
using namespace std;

class pro
{
    int a, b;

public:
    pro()
    {
        cout << "enter value: ";
        cin >> a >> b;
        if (a > b)
        {
            cout << "a is big";
        }
        else
        {
            cout << "b is big"<<endl;
        }
    }
    pro(string n)
    {
        cout<<"hiii "<<n<<endl;
    }
};

int main()
{
    pro m1;
    pro m2("Nick");
}
