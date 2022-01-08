#include<iostream>
using namespace std;
void is_Prime_loop(int n)
{
    int i; bool check;
    if(n<2)
    cout<<"Neither Prime nor Composite!";
    else if(n==2)
    cout<<"Prime number!";
    else
    {
        for(i=2;i<n/2;i++)
        {
            if(n%i==0)
            {
                check = false;
                break;
            }
            else
            check = true;
        }
        if(check)
        cout<<"Prime number!";
        else
        cout<<"Not a prime number!";
    }
}
bool is_Prime_rec(int n, int i = 2)
{
    if(n<=2)
        return (n==2)? true : false;
    if(n%i == 0)
        return false;
    if(i*i>n)
        return true;
    
    return is_Prime_rec(n,i+1);
}
int main()
{
    system("CLS");
    int n, i;
    bool check;
    cout<<"Enter a number :"; cin>>n;
    cout<<"\nUsing loop :\t";
    is_Prime_loop(n);
    cout<<"\nUsing recursion :\t";
    if(is_Prime_rec(n))
        cout<<"Prime!";
    else
        cout<<"Not Prime!";
    return 0;
}