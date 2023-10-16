#include <iostream>
using namespace std;

void dataset(int i,int n,int sum)
{
    for(i=1 ; i<n ; i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        cout << "perfect number";
    }
    else
    {
        cout <<"not perfect";
    }
}

int main()
{
    int i,n,sum=0;
    cout <<"Enter a number:";
    cin >> n;
    dataset(i,n,sum);
}