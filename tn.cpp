#include<bits/stdc++.h>
using namespace std;

int tn(string s){
	string x = s;
	reverse(s.begin(), s.end());
	if(s==x) return 1;
	return 0;
}

int main(){
	string s;
	ifstream ifs;
	map <string, int > mp;
	vector < string > vt;
	int max = 0;
	ifs.open("VANBAN.txt");
	while(ifs >> s){
		if(tn(s)==1){
			mp[s]++;
			if(max < s.length())	max = s.length();
			vt.push_back(s);
		}
	}
	for(int i=0;i<vt.size();i++){
		if(mp[vt[i]] != 0 && vt[i].length() == max){
			cout << vt[i]<<" "<< mp[vt[i]] << endl;
			mp[vt[i]]=0;
		}
	}
}
