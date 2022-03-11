#include<bits/stdc++.h>
using namespace std;

int main(){
	int a[100];
	a[2]=20000;		a[5]=10000;		a[7]=15000;	 	 a[29]=50000; 	 	a[45]=70000;
	map<string, long> mp;
	string b[100];
	int t,i=0,sl=0;
	cin>>t;
	while(t--){
		string s;
		int n, kt=0;
		cin>>s>>s>>n>>s;
		if(s=="OUT") kt=1;
		cin>>s;
		if(kt==0) mp[s]+=a[n];
		if(sl<mp.size()){
			b[i++]=s;
			sl=mp.size();
		}
	}
	for(int j=0; j<i; j++){
		cout << b[j] <<": "<<mp[b[j]]<<endl;
	}
}

