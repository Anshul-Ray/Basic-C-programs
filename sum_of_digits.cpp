#include<iostream>
using namespace std;
int sod(int x)
{
    int sum=0, r;
    while(x>0)
    {
        r=x%10;
        sum+=r;
        x/=10;
    }
    return sum;
}

int main()
{
    system("CLS");
    int n;
    cout<<"Enter number : ";cin>>n;
    cout<<"Sum of digits of "<<n<<" = "<<sod(n);
}