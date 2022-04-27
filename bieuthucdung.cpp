#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, dem;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack < char > st;
		dem = 0;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '['){
				st.push(s[i]);
			}
			else{
				if(!st.empty()) st.pop();
				else{
					int j = i + 1;
					for(; j < s.size(); j++)	if(s[i] != s[j]) break;
					while(i < j){
						dem++;
						swap(s[j], s[j - 1]);
						j--;
					}
					st.push(s[i]);
				}
			} 
		}
		cout << dem << "\n";
	}
}
