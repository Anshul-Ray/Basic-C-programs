//Only for integer values not floating values.
#include<iostream>
using namespace std;
void d2b(int n)
{
    int i=0,a[25];bool isNeg;
    if(n<0)
    {
        isNeg = true;
        n*=-1;
    }
    else
    isNeg = false;
    while(n>0)
    {
        a[i]=n%2;
        n/=2;
        i++;
    }
    cout<<"\nBinary : ";
    if(isNeg)
    cout<<"-";
    for(i=i-1;i>=0;i--)
    cout<<a[i];
}
void d2o(int n)
{
    int i=0,a[25];bool isNeg;
    if(n<0)
    {
        isNeg = true;
        n*=-1;
    }
    else
    isNeg = false;
    while(n>0)
    {
        a[i]=n%8;
        n/=8;
        i++;
    }
    cout<<"\nOctal : ";
    if(isNeg)
    cout<<"-";
    for(i=i-1;i>=0;i--)
    cout<<a[i];
}
void d2h(int n)
{
    int i=0,m;char a[25];bool isNeg;
    if(n<0)
    {
        isNeg = true;
        n*=-1;
    }
    else
    isNeg = false;
    while(n>0)
    {
        m=n%16;
        switch(m)
        {
            case 0 : a[i]='0'; break;
            case 1 : a[i]='1'; break;
            case 2 : a[i]='2'; break;
            case 3 : a[i]='3'; break;
            case 4 : a[i]='4'; break;
            case 5 : a[i]='5'; break;
            case 6 : a[i]='6'; break;
            case 7 : a[i]='7'; break;
            case 8 : a[i]='8'; break;
            case 9 : a[i]='9'; break;
            case 10 : a[i]='A'; break;
            case 11 : a[i]='B'; break;
            case 12 : a[i]='C'; break;
            case 13 : a[i]='D'; break;
            case 14 : a[i]='E'; break;
            case 15 : a[i]='F'; break;
        }
        n/=16;
        i++;
    }
    cout<<"\nHexadecimal : ";
    if(isNeg)
    cout<<"-";
    for(i=i-1;i>=0;i--)
    cout<<a[i];
}
int main()
{
    system("CLS");
    int n;
    cout<<"Enter decimal number :";cin>>n;
    d2b(n);
    d2o(n);
    d2h(n);
}