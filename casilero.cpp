#include<bits/stdc++.h>
using namespace std;

bool  cmp(pair <int,int> a, pair <int,int> b){
	return a.second < b.second;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector < pair<int, int> > vp(n);
		for(int i=0;i<n;i++)	cin>>vp[i].first>>vp[i].second;
		sort(vp.begin(), vp.end(), cmp);
		int dem=1, x=vp[0].second;
		for(int i=1;i<n;i++){
			if(vp[i].first>x){
				dem++;
				x=vp[i].second;
			}
		}
		cout<<dem<<endl;
	}
}
