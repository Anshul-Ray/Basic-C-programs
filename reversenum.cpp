#include<iostream>
using namespace std;
int revNum(unsigned int n) //Valid upto 9 digits
{
    unsigned int nn=0, r;
    while(n>0)
    {
        r=n%10;
        nn=nn*10+r;
        n=n/10;
    }
    return nn;
}
int main()
{
    system("CLS");
    unsigned int n;
    cout<<"Enter number : "; cin>>n;
    cout<<"Reverse number : "<<revNum(n);
}