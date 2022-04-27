#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,s,sum,ok=0;
	cin>>m>>s;
	sum=s-1;
	int a[1005],b[1005];
	if(m==1&&s==0) {
		cout<<0<<" "<<0;
		ok=1;
	}
	if(s==0&&m>1||s>9*m) {
		cout<<-1<<" "<<-1;
		ok=1;
	}
	if(ok==0){
		for(int i=0;i<m;i++){
			a[i]=0;
			b[i]=0;
		}
		for(int i=m-1;i>=0;i--){
			for(int j=9;j>0;j--){
				if(sum-j>=0){
					b[i]=j;
					sum-=j;
					break;
				}
			}
			if(b[i]==0) break;
		}
		b[0]=b[0]+1;
		for(int i=0;i<m;i++){
			for(int j=9;j>0;j--){
				if(s-j>=0){
					a[i]=j;
					s-=j;
					break;
				}
			}
			if(a[i]==0) break;
		}
		for(int i=0;i<m;i++) cout<<b[i];
		cout<<" ";
		for(int i=0;i<m;i++) cout<<a[i];
	}
}
