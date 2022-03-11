#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
   	while(t--){
    	long long n;
    	cin>>n;
    	if(n==0||n==1) cout<<"YES"<<endl;
    	else{
	    	long long f=1, f0=0, f1=1;
	    	while(f<n){
	    		f=f1+f0;
	    		f0=f1;
	    		f1=f;
	    	}
	    	if(f==n) cout<<"YES"<<endl;
	    	else cout<<"NO"<<endl;
	    }
	}
}

