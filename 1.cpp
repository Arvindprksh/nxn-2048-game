/*#include<iostream>
#include<stdlib.h>
using namespace std;

void add(int *a,int n)
{
    int i,j,k=0,m=0;
    for(i=0;i<=n;i++)
    {
        for(j=m;j<=n;j++)
        {
            if(a[j]==a[j+1])
            {
                a[j]=a[j]+a[j+1];
                m=(j+1);
                for(k=m+1;k<=n;k++)
                   {
                       a[k-1]=a[k];//cout<<k<<"  ";
                   }
                a[k]=0;
             //   for(i=0;i<n;i++)    cout<<a[i];
               // cout<<endl;
            }
        }
        j=m;
    }
}
void add(int *a,int n,char dir)
{
    int i,j,k=0,m=0;
    for(i=0;i<=n;i++)
    {
        for(j=m;j<=n;j++)
        {
            if(a[j]==a[j+1])
            {
                a[j]=a[j]+a[j+1];
                m=(j+1);
                for(k=m+1;k<=n;k++)
                   {
                       a[k-1]=a[k];//cout<<k<<"  ";
                   }
                a[k]=0;
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
                if(a[j]!=0)
                {
                    a[i]=a[j];a[j]=0;break;
                }
            }
        }
    }
    else if(dir=='L');
}
int main()
{

    int n,i;
    char c;
    cout<<"enter n";
    cin>>n>>c;
    int *a=(int*)malloc(10*sizeof(int));
    for(i=0;i<=n;i++)
        {
            if(i!=n) cin>>a[i];
             else  a[i]=0;
        }
    add(a,n,c);
    for(i=0;i<n;i++)
        cout<<a[i];
}
*/
