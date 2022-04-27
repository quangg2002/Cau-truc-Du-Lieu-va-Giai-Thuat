#include<bits/stdc++.h>
using namespace std;
int n,m,ans=INT_MIN;
int x[1005]={0};
int a[1005],b[1005];
vector<int>ve;
void check(){
    int sum1=0,sum2=0;
    for(int i=1;i<=n;i++){
        if(x[i]==1){
            sum1+=a[i];sum2+=b[i];
        }
    }
    if(sum1 <= m){
        if(sum2 > ans){
            ve.clear();
            ans = sum2;
            for(int i = 1;i <= n;i++){
                ve.push_back(x[i]);
            }
        }
    }
}
void back_track(int i){
    for(int j = 0;j <= 1; j++){
        x[i] = j;
        if(i==n) check();
        else back_track(i+1);
    }
}
main(){
    cin >> n >> m;
    a[n],b[n];
    for(int i = 1;i <= n;i++) cin >> a[i];
    for(int i = 1;i <= n;i++) cin >> b[i];
    back_track(1);
    cout<< setprecision(1)<<fixed<<ans<<endl;
    for(int i = 0;i < n;i++)cout<< ve[i]<<" ";
    
}
