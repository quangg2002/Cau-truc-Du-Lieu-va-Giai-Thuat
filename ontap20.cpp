#include<bits/stdc++.h>
using namespace std;

int n, c, d1, d2, dd[1005], truoc[1005];
vector < vector < int > > v(1005);

void dfs(int dinh){
	dd[dinh] = 1;
	for(int i = 0; i < v[dinh].size(); i++){
		int k = v[dinh][i];
		if(!dd[k]){
			dd[k] = 1;
			truoc[k] = dinh;
			dfs(k);
		}
	}
}

void duongdi(){
	memset(dd, 0, sizeof(dd));
	memset(truoc, 0, sizeof(dd));
	dfs(d1);
	if(!dd[d2])	cout << "-1" << endl;
	else{
		vector < int > cnt;
		while(d2 != d1){
			cnt.push_back(d2);
			d2 = truoc[d2];
		}
		cnt.push_back(d1);
		reverse(cnt.begin(), cnt.end());
		for(auto x : cnt) cout << x << " ";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> c >> d1 >> d2;
		v.clear();
		v.resize(1005);
		for(int i = 0; i < c; i++){
			int a, b;
			cin >> a >> b;
			v[a].push_back(b);
			//v[b].push_back(a);
		}
		duongdi();
		cout << endl;
	}
} 
