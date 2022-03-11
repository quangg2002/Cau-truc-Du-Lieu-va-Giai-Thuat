#include<bits/stdc++.h>
#include <windows.h>
using namespace std;

int main(){
	ifstream ifs;
	ifs.open("noel.txt");
	string s;
	while(ifs.eof() == 0){
		getline( ifs , s );
		Sleep(50);
		cout << s << endl;
	}
	ifs.close();
}
