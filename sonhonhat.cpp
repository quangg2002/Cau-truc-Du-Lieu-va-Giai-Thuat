#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int s, d, a[10005], ok = 0;
		cin>>s>>d;
		int sum=s-1;
		for(int i=0;i<d;i++) a[i]=0;
		
		for(int i=d-1;i>=0;i--){
			for(int j=9;j>0;j--){
				if(sum>=j){
					a[i]=j;
					sum-=j;
					break;
				}
			}
			if(sum==0){
				ok = 1;
				break;
			}
		}
		a[0]+=1;
		if(s == 10 && d == 1) ok = 0;
		if(ok == 1)	for(int i=0;i<d;i++) cout<<a[i];
		else cout << "-1";
		cout<<endl;
	}
}
