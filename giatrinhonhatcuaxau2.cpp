#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, k;
	cin >> t;
	while(t--){
		string s;
		cin >> k >> s;
		map < char, long long > mp;
		long long sum = 0;
		for(int i = 0; i < s.size(); i++) mp[s[i]]++;
		priority_queue < long long > q;
		for(auto x : mp) q.push(x.second);
		while(k > 0){
			long long x = q.top();
			q.pop();
			if(x >=1)	x--; 
			k--;
			q.push(x);
		}
		while(!q.empty()){
			sum += q.top() * q.top();
			q.pop();
		}
		cout << sum << endl;
	}
}
