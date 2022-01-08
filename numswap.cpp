#include<iostream>
using namespace std;
void numSwap_pm(int *p, int *m) //Using +-
{
    *p=*p+*m;
    *m=*p-*m;
    *p=*p-*m;
}
void numSwap_md(int *m, int *d) // Using */
{
    *m=(*m)*(*d);
    *d=(*m)/(*d);
    *m=(*m)/(*d);
}

int main()
{
    system("CLS");int A,B;
    cout<<"Enter A : ";cin>>A;
    cout<<"Enter B : ";cin>>B;
    cout<<"Swap :-\n";numSwap_pm(&A,&B);
    cout<<"A : "<<A<<"\tB : "<<B;
    cout<<"\nSwap :-\n";numSwap_md(&A,&B);
    cout<<"A : "<<A<<"\tB : "<<B;
}