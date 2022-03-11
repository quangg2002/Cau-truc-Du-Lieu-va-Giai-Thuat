#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int maxn =(int) 1e6;
const int mod=1000000001;
bool used[1000000];
struct job{
	int id;
	int dl;
	int profit;
};
bool cmp(job a, job b){
	return a.profit>b.profit;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		job a[n + 5];
		for(int i=0;i<n;i++){
			cin>>a[i].id>>a[i].dl>>a[i].profit;
		}
		sort(a,a+n, cmp);
		memset(used, false, sizeof(used));
		int mark[n+5], sum=0;
		for(int i=0;i<=n-1;i++){
			for(int j=a[i].dl-1;j>=0;j--){
			if(used[j]==false){
				used[j]= true;
				mark[j]=i;
				sum+=a[i].profit;
				break;
				}	
			}
		}
		int res=0;
		for(int i=0;i<n;i++){
			if(used[i]){
				++res;
			}
		}
		cout<<res<<" "<<sum<<endl;
	}
}

