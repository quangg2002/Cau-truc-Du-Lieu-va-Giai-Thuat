#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int l1 = s1.size(), l2 = s2.size();
		long long sum1 = 0, sum2 = 0;
		for(int i = l1 - 1; i >= 0; i--) sum1 += (s1[l1 - i - 1] - '0') * pow(2, i);
		for(int i = l2 - 1; i >= 0; i--) sum2 += (s2[l2 - i - 1] - '0') * pow(2, i);
		cout << (long long) sum1 * sum2 << endl;
	}
}
