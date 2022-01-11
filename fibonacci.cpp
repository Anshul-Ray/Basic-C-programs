#include<iostream>
using namespace std;
void fibo(int n)
{
    int x1=0,x2=1,x3,i;
    if(n>0)
    {
        cout<<"\nFibonacci series :\t";
        switch(n)
        {
            case 1 : cout<<x1;break;
            case 2 : cout<<x1<<" "<<x2;break;
            default : 
            {
                cout<<x1<<" "<<x2<<" ";
                for(i=3; i<=n ; i++)
                {
                    x3=x1+x2;
                    x1=x2;
                    x2=x3;
                    cout<<x3<<" ";
                }
            }
        }
    }
    else
    {
        cout<<"Enter value above 0!";
        exit(0);
    }
}

void fibo_dym(int n)
{
    int x[n],x1=0,x2=1,i;
    x[0]=x1, x[1]=x2;
    if(n>0)
    {
        cout<<"\nFibonacci series using dynamic programming :\t";
        switch(n)
        {
            case 1 : cout<<x[0];break;
            case 2 : cout<<x[0]<<" "<<x[1];break;
            default : 
            {
                for(i=2; i<n ; i++)
                {
                    x[i]=x1+x2;
                    x1=x2;
                    x2=x[i];
                }
                for(i=0 ; i<n ; i++)
                {
                    cout<<x[i]<<" ";
                }
            }
        }
    }
    else
    {
        cout<<"Enter value above 0!";
        exit(0);
    }
}


int fibo_rec(int n) // recursion
{
    switch(n)
    {
        case 0 : return 0;
        case 1 : return 1;
        default : return(fibo_rec(n-1)+fibo_rec(n-2));
    }
}

int main()
{
    system("CLS");
    int n;
    cout<<"Enter n :"; cin>>n;
    fibo(n);
    fibo_dym(n);
    cout<<"\nFibonacci series using recursion :\t";
    for(int i=0 ; i<n ; i++)
    cout<<fibo_rec(i)<<" ";
}