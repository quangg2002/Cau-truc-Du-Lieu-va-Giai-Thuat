#include<bits/stdc++.h>
using namespace std;
 
int ngto(int s){
	while(s> 0){
		int x= s%10;
		if(x!= 2 && x!=3 && x!=5 && x!=7) return 0;
		s/=10;
	}
	return 1;
}
 
int main(){
	int s;
	map<int, int> mp;
	vector <int> v;
	while(cin>>s){
		if(ngto(s)){
			if(mp[s]==0) v.push_back(s);
			mp[s]++;
		}
	}
	for(int i= 0; i< v.size(); i++)
		cout<< v[i]<< " "<< mp[v[i]]<< endl;
}
