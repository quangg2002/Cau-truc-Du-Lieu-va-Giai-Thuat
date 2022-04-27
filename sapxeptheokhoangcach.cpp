#include<bits/stdc++.h> 
using namespace std;

struct pt{
	int giatri;
	int vitri;
	int hieu; 
}a[100005];
bool comp(pt a, pt b){
   if(a.hieu > b.hieu) return 0;
   if(a.hieu == b.hieu){
   		if(a.vitri> b.vitri) return 0;
   }
   return 1;
}
int main(){
	int t;
	cin>> t;
	while(t--){
		int n, k;
	    cin>>n>> k;
	    for(int i=0; i<n; i++){
	    	cin>> a[i].giatri;
	    	a[i].vitri= i;
	    	a[i].hieu= abs(a[i].giatri-k);
		}
		sort(a,a+n,comp);
	    for(int i=0; i<n; i++) cout<< a[i].giatri<< " ";
	    cout<< endl;
	}
}
