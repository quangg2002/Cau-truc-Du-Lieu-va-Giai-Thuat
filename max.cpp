#include<bits/stdc++.h>
using namespace std;

int tim(string s){
	int l=s.length();
	int sum=0, vt=0, max=0;
	for(int i=0;i<l-1;i++){
		sum+=(s[i]-'0')*10+(s[i+1]-'0');
		if(sum > max){
			max=sum;
			vt=i+1;
		}
		sum=0;
	}
	return vt;
}
int main(){
	string s;
	cin>>s;
/*	int l=s.length();
	int sum=0, vt=0, max=0;
	for(int i=0;i<l-1;i++){
		sum+=(s[i]-'0')*10+(s[i+1]-'0');
		if(sum > max) vt=i;
		cout<<sum<<endl;
		sum=0;
	}
*/
	cout<< tim(s);
}
