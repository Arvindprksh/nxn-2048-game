
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
using namespace std;
static int a[10][10],B[10][10],C[10][10];
void add(int a[10][10],int n,char dir)
{
int b[10][10],I,i,j,k=0,m=0;
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
        m=0;
        for(i=0;i<n;i++)
                {
                for(j=i;j<n;j++)
                    {
                    if(a[I][j]!=0)
                        {
                        a[I][i]=a[I][j];
                        if(i!=j)
                            a[I][j]=0;
                        break;
                        }
                    }
                }
        for(i=0;i<=n;i++)
            {
            for(j=m;j<=n;j++)
                {
                if(a[I][j]==a[I][j+1])
                    {
                    a[I][j]=a[I][j]+a[I][j+1];
                    m=(j+1);
                    for(k=m+1;k<=n;k++)
                        {
                        if(k-1>=0)
                        a[I][k-1]=a[I][k];
                        }
                    a[I][k]=0;
                    }
                }
            j=m;
            }
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
int gameover(int count,int n)
{
    int i,j,flag1[10][10],Flag=0,flag2=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(flag1[i][j]==1)
                Flag++;
        }
    }
    if(count%2==0)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                    B[i][j]=a[i][j];
             }
        }
        else if(count%2!=0)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                    C[i][j]=a[i][j];
             }
        }
       for(i=0;i<n;i++)
            {
            for(j=0;j<n;j++)
                {
                   if(C[i][j]==B[i][j])
                   flag2++;
                }
            }
        if(flag2==0 && Flag==n*n)
            return 1;
        Flag=0;flag2=0;
return 0;
        }
void randomfun(int n)
{
    int r,i,j,t=0;
    r=(int)((((float)rand()/(float)RAND_MAX))*16);
        for(i=0;i<=n;i++)                            //RANDOM NUMBER GENERATION PART STARTS HERE
            {
            for(j=0;j<=n;j++)
                {
                if(j!=n && i!=n)
                {
                    if(r==t++ && a[i][j]==0)
                        a[i][j]=2;}
                else a[i][j]=0;
                }
            }
        t=0;
}
int main()
{
    int n,i,j;
    char c,count=0;
    cout<<"enter n";
    cin>>n;srand (time(NULL));
    while(++count)
    {
    cin>>c;
    system("cls");
    add(a,n,c);
    /*for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }*/
randomfun(n);
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<a[i][j]<<" ";
            cout<<endl;
        }

        if(gameover(count,n)==1) break;
    }
}

