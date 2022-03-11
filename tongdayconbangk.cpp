#include<bits/stdc++.h>

using namespace std;

int ok= 0, n, a[20], b[20]={0};
long long sum,dem=0;

void xuly(){
    int i = n-1;
    while(i>=0&&b[i]==1){
        b[i]=0;
        i--;
    }
    if(i < 0) ok=1;
    else {
        long long choose = 0;
        b[i]=1;
        for(int i = 0; i <n;i++){
            if(b[i]==1){
                choose+=a[i];
            }
        }
        if(choose==sum) {
            dem++;
            for (int i = 0; i <n; i++){
                if(b[i]==1) {
                    cout<<a[i]<<" ";
                }
            }
             cout<<endl;
        }
    }
}
int main(){
    cin>>n;
    cin>>sum;
    for(int i = 0; i <n; i++) cin>>a[i];
    sort(a,a+n);
    while(!ok){
        xuly();
    }
    cout<<dem;
}
