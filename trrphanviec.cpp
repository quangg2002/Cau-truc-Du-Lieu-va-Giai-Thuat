#include<bits/stdc++.h>
using namespace std;
int n,a[100][100],b[100],minn=10000,c[100][100],dem=0;

void xuat()
{
    for(int i=0;i<dem;i++)
    {
        for(int j=1;j<=n;j++) cout << "Man" << j << "->" << "Job" << c[i][j] << " " << "||";
        cout << endl;
    }
}
void ktr()
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=a[i][b[i]];
    }
    if(sum<minn)
    {
        minn=sum; dem=0;
        for(int i=1;i<=n;i++) c[dem][i]=b[i];
        dem++;
    }
    else if(sum==minn)
    {
        for(int i=1;i<=n;i++) c[dem][i]=b[i];
        dem++;
    }
}
void Try(int i)
{
    for(int j=1;j<=n;j++)
    {
        int kt=0;
        for(int h=1;h<i;h++)
        {
            if(b[h]==j)
            {
                kt=1; break;
            }
        }
        if(kt==0)
        {
            b[i]=j;
            if(i==n) ktr();
            else Try(i+1);
        }
    }
}
int main()
{
    cin >> n;
    for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin >> a[i][j];
    Try(1);
    xuat();
}
