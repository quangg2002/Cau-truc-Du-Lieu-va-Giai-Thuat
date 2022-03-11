#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int d=0,dem[100005]={0};
		int vt1=s.find("100"), vt2=vt1;
		while(vt1!=-1){
			if(vt1==vt2||vt1+1==vt2) dem[d]++;
			else{
				d++;
				dem[d]++;
			}
			vt2=vt1;
			s.erase(vt1,3);
			vt1=s.find("100");
		}
		int mx=0;
		for(int i=0;i<=d;i++) mx=max(mx,dem[i]);
		cout<<mx*3<<endl;
	}
}
