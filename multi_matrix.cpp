#include<iostream>
using namespace std;
void get_matrix(int A[][10],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"A["<<i+1<<"]["<<j+1<<"] : ";cin>>A[i][j];
        }
        cout<<"\n";
    }
}
void disp_matrix(int A[][10],int row,int col)
{
    int i,j;
    cout<<"\nMatrix :- \n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        cout<<A[i][j]<<" ";
        cout<<"\n";
    }
}
void multi_matrix(int A[][10], int B[][10], int row1, int col1, int col2)
{
    int i,j,k,Res[10][10]={0};
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            for(k=0; k<col1 ; k++)
            {
                Res[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    cout<<"\nProduct of the matrices :\n";
    disp_matrix(Res,row1,col2); 
}
int main()
{
    system("CLS");
    int r1,r2,c1,c2,A[10][10],B[10][10];
    cout<<"Enter row of 1st matrix : "; cin>>r1;
    cout<<"Enter col of 1st matrix : "; cin>>c1;
    cout<<"Enter row of 2nd matrix : "; cin>>r2;
    cout<<"Enter row of 2nd matrix : "; cin>>c2;
    if(c1!=r2)
    cout<<"Multiplication not possible!";
    else
    {
        cout<<"Enter 1st matrix :\n";get_matrix(A,r1,c1);
        cout<<"Enter 2nd matrix :\n";get_matrix(B,r2,c2);
        system("CLS");
        disp_matrix(A,r1,c1);
        disp_matrix(B,r2,c2);
        multi_matrix(A,B,r1,c1,c2);
    }
}