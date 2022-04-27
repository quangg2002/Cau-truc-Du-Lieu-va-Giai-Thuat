#include<bits/stdc++.h>
using namespace std;

int main(){
	ifstream ifs;
	ofstream ofs;
	ifs.open("PTITin.txt");
	ofs.open("PTITout.txt");
	string s;
	while(ifs.eof()==0){
		getline(ifs , s);
		ofs << s << endl;
	}
	ifs.close();
	ofs.close();
}
