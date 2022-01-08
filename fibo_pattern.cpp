//Fibonacci pattern using fibonacci series with dynamic programming
#include<iostream>
using namespace std;
int main()
{
    system("CLS");
    int x1=1,x2=1,i,j,n;
    cout<<"Enter limit :";cin>>n;
    int x[n];
    x[0]=x1, x[1]=x2;
    if(n>0)
    {
        for(i=2; i<n ; i++)
        {
            x[i]=x1+x2;
            x1=x2;
            x2=x[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            cout<<x[j]<<" ";
            cout<<"\n";
        }
    }
    else
    {
        cout<<"Enter value above 0!";
        exit(0);
    }
}
