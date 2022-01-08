#include<iostream>
using namespace std;
int revNum(unsigned int n) 
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
    int r;
    cout<<"Enter a number : "; cin>>n;
    n = revNum(n);
    while (n>0)
    {
        r=n%10;
        switch(r)
        {
            case 0 : cout<<"Zero "; break;
            case 1 : cout<<"One "; break;
            case 2 : cout<<"Two "; break;
            case 3 : cout<<"Three "; break;
            case 4 : cout<<"Four "; break;
            case 5 : cout<<"Five "; break;
            case 6 : cout<<"Six "; break;
            case 7 : cout<<"Seven "; break;
            case 8 : cout<<"Eight "; break;
            case 9 : cout<<"Nine "; break;
        }
        n/=10;
    }
    return 0;
}