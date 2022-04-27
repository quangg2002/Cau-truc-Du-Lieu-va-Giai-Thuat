#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, a[1005] ,b[1005] ,max=1, x=0;
		cin>>n;
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		for(int i=0;i<n;i++){
			int t1=0, t2=0;
			for(int j=i;j<n;j++){
				t1+=a[j];
				t2+=b[j];
				if(t1==t2) x=j-i+1;
			}
			if(x>max) max=x;;
		}
		cout<<max<<endl;
	}
}
