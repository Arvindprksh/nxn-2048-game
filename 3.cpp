/*
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
void add(int a[10][10],int n,char dir)
{
int b[10][10],I,i,j,k=0,m=0,i1,j1;
if(dir=='W' || dir=='S')
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            b[i][j]=a[i][j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            a[i][j]=b[j][i];
    }
}
    for(I=0;I<=n;I++)
        {
            for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
        cout<<"1"<<endl;
            m=0;
            for(i=0;i<n;i++)
                {
                for(j=i;j<n;j++)
                    {
                    if(a[I][j]!=0)
                        {
                        a[I][i]=a[I][j];
                        if(j!=i)
                            a[I][j]=0;
                        break;
                        }
                    }
                }
                for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
        cout<<"2"<<endl;
        for(i=0;i<=n;i++)
            {
            for(j=m;j<=n;j++)
                {
                if(a[I][j]==a[I][j+1])
                    {
                    a[I][j]=a[I][j]+a[I][j+1];
                    m=(j+1);
                    for(k=m+1;k<=n;k++)
                        a[I][k-1]=a[I][k];
                    a[I][k]=0;
                    }
                }
            j=m;
            }
            for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
        cout<<"3"<<endl;
    if(dir=='D' || dir=='S')
    {
            for(i=n-1;i>=0;i--)
                {
                for(j=i;j>=0;j--)
                    {
                    if(a[I][j]!=0)
                        {
                        a[I][i]=a[I][j];a[I][j]=0;break;
                        }
                    }
                }
    }
    else if(dir=='A');
    }
    if(dir=='W' || dir=='S')
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            b[i][j]=a[i][j];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            a[i][j]=b[j][i];
        }
    }
}
int main()
{
    int n,i,j;
    char c,count=0;
    cout<<"enter n";
    cin>>n;
    static int a[10][10]={{4,0,2,0},{4,0,0,0},{0,0,0,0},{0,0,2,0}};;
    while(++count)
    {
    for(i=0;i<=n;i++)
        {
        for(j=0;j<=n;j++)
            {
            if(j!=n && i!=n) cin>>a[i][j];
             else  a[i][j]=0;
            }
        }
    cin>>c;
    add(a,n,c);
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
}
*/

