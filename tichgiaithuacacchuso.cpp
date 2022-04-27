#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a[10]={0};
		cin>>n;
		char x;
		while(n--){
			cin>>x;
			if(x=='2'||x=='3'||x=='5'||x=='7') a[x-'0']++;
			if(x=='4'){
				a[3]++; a[2]+=2;
			}
			if(x=='6'){
				a[5]++; a[3]++;
			}
			if(x=='8'){
				a[7]++; a[2]+=3;
			}
			if(x=='9'){
				a[7]++; a[3]+=2; a[2]++;
			}
		}
		for(int i=9;i>1;i--){
			while(a[i]>0){
				cout<<i;
				a[i]--;
			}
		}
		cout<<endl;
	}
}
