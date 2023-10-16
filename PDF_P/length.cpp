#include<iostream>
using namespace sid;

void arr(char str[50],char str1[50], int i, int j, int length)
{
    for(i=0 ; str[i]!='\0' ; i++)
    {
        length=i;
    }

    for(i=length ; i>=0 ; i--)
    {
        str1[j]=str[i];
        j++;
    }
    cout <<"revers str:%s",str1;
}

int main()
{
    int i,j=0,length;
    char str[50],str1[50];

    cout <<"enter str value:";
    cin >> str;

    arr(str,str1,i,j,length);
}