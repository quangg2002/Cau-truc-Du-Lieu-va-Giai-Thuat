#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		int a[100], r[100];
		cin >> n;
		for(int i = 1; i <= n; i++) cin >> a[i];
		stack < int > st;
		st.push(0);
		for(int i = 1; i <= n; i++){
			while(st.size() > 1 && a[st.top()] <= a[i]) st.pop();
			if(!st.empty()) r[i] = i - st.top();
			st.push(i);
		}
		for(int i = 1; i <= n; i++) cout << r[i] << " ";
	}
}
