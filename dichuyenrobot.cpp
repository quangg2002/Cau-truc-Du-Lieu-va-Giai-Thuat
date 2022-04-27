#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	char s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int x=0, y=0;
	for(int i=0;i<n;i++){
		if(s[i]=='G') y++;
		if(s[i]=='B') y--;
		if(s[i]=='R') x++;
		if(s[i]=='L') x--;
		cout<<s[i];
	}
	cout<< x <<" "<< y;
}
