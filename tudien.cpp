#include<bits/stdc++.h>
using namespace std;

string s;
int k, n , m;
char c[100][100];
vector < string > v, res;

int dd[100][100] = {0};
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};

void ql(int i, int j, string x){
	for(int vt = 0; vt < k; vt++){
		if(v[vt] == x){
			res.push_back(x);
		}
	}
	for(int vt = 0; vt < 8; vt++){
		int xm = i + dx[vt];
		int ym = j + dy[vt];
		if(xm >= 1 && ym >= 1 && xm <= n && ym <= m && dd[xm][ym] == 0){
			dd[xm][ym] = 1;
			ql(xm, ym, x + c[xm][ym]);
			dd[xm][ym] = 0;
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		v.clear();
		res.clear();
		memset(dd,0,sizeof(dd));
		cin >> k >> n >> m;
		for(int i = 0; i < k; i++){
			cin >> s;
			v.push_back(s);
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				cin >> c[i][j];
			}
		}
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= m; j++){
				memset(dd,0,sizeof(dd));
				dd[i][j] = 1;
				string a = "";
				ql(i, j, a + c[i][j]);
			}
		}
		if( !res.size() ) cout << "-1\n";
		else{
			for(auto a : res) cout << a << " ";
			cout << "\n";
		}
	}
}
