#include<iostream>
using namespace std;

int fact(int n)
{
    if(n>0)
    return n*fact(n-1);
    else
    return 1;
}

int main()
{
    system("CLS");
    int n;
    cout<<"Enter number :";cin>>n;
    cout<<"Factorial of "<<n<<" = "<<fact(n);
}