#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005][1005];
int n,m,ans=INT_MAX,ok;
vector<int>ve;
void out(){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i<n){
            sum+=b[a[i]][a[i+1]];
        }else{
            sum+=b[a[i]][a[1]];
        }
    }
    if(ans > sum){
        ve.clear();
        ans = sum;
        for(int i=1;i<=n;i++){
            ve.push_back(a[i]);
        }
        ve.push_back(a[1]);
    }
}
void init(){
    for(int i=1;i<=n;i++) a[i]=i;
}
void next(){
    int i = n - 1;
    while(i >= 1&&a[i] > a[i+1]) i--;
    if(i==0) ok=0;
    int j=n;
    while(a[i]>a[j]) j--;
    swap(a[i],a[j]);
    sort(a+i+1,a+n+1);
}
main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>b[i][j];
        }
    }
    ok=1;
    init();
    while(ok){
        out();
        next();
    }
    cout << ans << endl;
    for(int i=0;i<=n;i++) cout<<ve[i]<<" ";
}
