#include<bits/stdc++.h>
using namespace std;

int a[1000], dd[1001];
string s;

void in(){
	for(int i = 0; i < s.size(); i++) cout << s[a[i]] ;
	cout << " ";
}
void Try(int i){
	for(int j = 0; j< s.size(); j++){
		if(dd[j] == 0){
			a[i] = j;
			dd[j] = 1;
			if(i == s.size()-1) in();
			else{
				Try(i+1);
			}
			dd[j] = 0;
		}
	}
}

int main(){
	int t; 
	cin >> t;
	while(t--){
		cin >> s;
		Try(0);
		cout << endl;
	}
}
