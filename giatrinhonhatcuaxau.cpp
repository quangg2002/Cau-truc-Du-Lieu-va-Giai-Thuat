#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
        long long k;
		string s;
		cin>>k>>s;
		long long b[256]={0}, a[256]={}, n=0;
		long long sum=0, ktr=0;
		for(int i=0;i<s.length();i++) b[s[i]]++;
		for(int i=0;i<s.length();i++){
			if(b[s[i]]>0){
				a[n++]=b[s[i]];
				ktr+=b[s[i]];
				b[s[i]]=0;
			}
		}
		if(k >= ktr) cout<<0<<endl;
		else{
			while(k>0){
				sort(a,a+n);
				a[n-1]--;
				k--;
			}
			for(int i=0;i<n;i++) sum+=a[i]*a[i];
			cout<<sum<<endl;
		}
	}
}
