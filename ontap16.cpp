#include<bits/stdc++.h>
using namespace std;

vector < int > kt(10000, 1);

int stoii(string s){
	int sum = 0;
	for(int i = 0; i < s.size(); i++)	sum = sum * 10 + (s[i] - '0');
	return sum;
}

void nto(){
	for(int i = 2; i <= sqrt(9999); i++){
		if(kt[i]){
			for(int j = i * i; j <= 9999; j += i) kt[j] = 0;
		}
	}
}

int main(){
	int t;
	cin >> t;
	nto();
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int dd[10000] = {0};
		dd[stoii(s1)] ++;
		queue < pair < string, int > > q;
		q.push({s1, 0});
		while(!q.empty()){
			string x = q.front().first;
			string z = x;
			int d = q.front().second;
			q.pop();
			if(x == s2){
				cout << d << endl;
				break;
			}
			for(int i = 0; i < 4; i++){
				int vt = 0;
				if(i == 0) vt = 1;
				for(int j = vt; j <= 9; j++){
					x[i] = j + '0';
					if(dd[stoii(x)] == 0 && kt[stoii(x)]){
						dd[stoii(x)]++;
						q.push({x, d + 1});
					}
				}
				x = z;
			}
		}
	}
}
