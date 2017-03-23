/*#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
void add(int a[10][10],int n,char dir)
{

    int I,i,j,k=0,m=0;
    for(I=0;I<=n;I++)
        {
            m=0;
            //cout<<"hola";
        for(i=0;i<=n;i++)
            {
               // cout<<"hola1";
            for(j=m;j<=n;j++)
                {
                   // cout<<I<<j<<" ";
                if(a[I][j]==a[I][j+1])
                    {
                    a[I][j]=a[I][j]+a[I][j+1];
                    m=(j+1);
                    for(k=m+1;k<=n;k++)
                        {
                        a[I][k-1]=a[I][k];//cout<<k<<"  ";
                        }
                        a[I][k]=0;
                        //for(i=0;i<n;i++)    cout<<a[i];
                        //cout<<endl;
                    }
                }
            j=m;
            }
    if(dir=='R')
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
    else if(dir=='L');
    }
}
int main()
{
    int n,i,j;
    char c;
    cout<<"enter n";
    cin>>n>>c;
    static int a[10][10];
    for(i=0;i<=n;i++)
        {
        for(j=0;j<=n;j++)
            {
                //cout<<"next"<<i<<j;
            if(j!=n && i!=n) cin>>a[i][j];
             else  a[i][j]=0;
            }
        }
    //for(i=0;i<=n;i++)
    //{
    add(a,n,c);
    //}

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<a[i][j];
        cout<<endl;
    }
}
*/
