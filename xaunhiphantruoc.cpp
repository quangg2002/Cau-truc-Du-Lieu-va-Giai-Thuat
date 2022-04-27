#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, ok;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.size();
		ok = 0;
		for(int i = 0; i < n-1 ; i++){
			if(s[i] == '1'){
				ok = 1;
				break;
			}
		}
		if(ok == 0) for(int i = 0 ; i < n; i++) cout << 1;
		else{
			for(int i = n-1 ; i >= 0; i--){
				if(s[i] == '1'){
					s[i] = '0';
					for(int j = i+1; j <= n-1 ; j++) s[j] = '1';
					break;
				}
			}
			cout << s ;
		}
		cout << endl;
	}
}
