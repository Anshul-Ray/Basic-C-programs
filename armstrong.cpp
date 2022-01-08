#include<iostream>
#include<math.h>
using namespace std;

bool is_Armstrong(int x)
{
    int nn=0, r, n, k=0;
    n=x;
    while(x>0)  //Counting digits.
    {
        k++;
        x/=10;
    }
    x=n;
    while(x>0)
    {
        r=x%10;
        nn+=(int)(pow(r,k)+1e-9); //Typecasting to int as pow() fn works for double.
        x/=10;
    }
    if(nn==n)
    return true;
    else
    return false;
}

int main()
{
    system("CLS");
    int n;
    cout<<"Enter number :"; cin>>n;
    if(is_Armstrong(n))
    cout<<"Armstrong number!";
    else
    cout<<"Not Armstrong number!";
}