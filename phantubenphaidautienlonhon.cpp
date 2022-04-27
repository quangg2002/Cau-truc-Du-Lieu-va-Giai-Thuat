#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int a[n + 5], r[n + 5];
		stack < int > st;
		for(int i = 0; i < n; i++) cin >> a[i];;
		for(int i = n - 1; i >= 0; i--){
			while(!st.empty() && a[st.top()] <= a[i]) st.pop();
			if(!st.empty()) r[i] = a[st.top()];
			else r[i] = -1;
			st.push(i); 
		}
		for(int i = 0; i < n; i++) cout << r[i] << " ";
		cout << endl;
	}
}
