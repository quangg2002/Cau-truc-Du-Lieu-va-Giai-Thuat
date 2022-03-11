#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int k,d=0;
		cin>>s>>k;
		for(int i=0;i<s.length();i++){
			int a[300]={0},dem=0;
			for(int j=i;j<s.length();j++){
				if(a[s[j]]==0) dem++;
				if(dem==k) d++;
				if(dem>k) break;
				a[s[j]]++;
			}
		}
		cout<<d<<endl;
	}
}
