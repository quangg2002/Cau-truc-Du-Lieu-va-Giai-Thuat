#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int x=0, d=0;
	stack < int > stk1;
	for(int i=0;i< s.size();i++){
		if(s[i]=='[') stk1.push(1);
		else if(s[i]=='(') stk1.push(2);
		else if(s[i]==')' && !stk1.empty() && stk1.top()==2) stk1.pop();
		else if(s[i]==')' && d!=0){
			while( !stk1.empty()) stk1.pop();
			d=0;
		}
		else if(s[i]==']' && !stk1.empty() && stk1.top()== 1){
			d++;
			x=max(x,d);
			stk1.pop();
		}
		else if(s[i]==']'&&d!=0){
			while(!stk1.empty()) stk1.pop();
			d=0;
		}
	}
	cout<<x;
}
