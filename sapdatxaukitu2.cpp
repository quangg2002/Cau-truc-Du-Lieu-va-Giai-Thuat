#include<bits/stdc++.h>

using namespace std;

int m = 1e9 +7;
long long powmod(long long n, long long k){
	long long x = powmod(n, k/2);
    if(k == 0) return 1;
    if(k%2==0) return x*x%m;
    return n *(x* x%m)%m;
}
int main(){
    while(1){
        long long a, b;
        cin>>a>>b;
        if(a== 0 && b== 0) break;
        cout<<powmod(a,b)<<endl;
    }
}
