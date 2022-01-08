#include<iostream>
#include<string.h>
using namespace std;
bool isNum_Pallindrome(unsigned int n) //Valid upto 9 digits
{
    unsigned int x=n;
    int nn=0, r;
    while(n>0)
    {
        r=n%10;
        nn=nn*10+r;
        n=n/10;
    }
    if(x==nn)
    return true;
    else
    return false;
}

bool isString_Pallindrome(char A[]) //Valid for upto 50 character string
{
    int i,j;
    j = strlen(A)-1;
    for(i=0 ; A[i]!='\0' ; i++,j--)
    {
        if(A[i]!=A[j])
        return false;
    }
    return true;
}
int main()
{
    system("CLS");
    unsigned int n; char str[50]; 
    cout<<"Enter a number : "; cin>> n;
    cout<<"Enter a string : "; gets(str);
    if(isNum_Pallindrome(n))
    cout<<"Pallindrome number!";
    else
    cout<<"Not Pallindrome number!";
    if(isString_Pallindrome(str))
    cout<<"Pallindrome string!";
    else
    cout<<"Not Pallindrome string!";
}