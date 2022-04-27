#include<bits/stdc++.h>
#include <windows.h>
using namespace std;

int main(){
	ifstream f1, f2, f3, f4;
	f1.open("3.txt");		f2.open("2.txt");		f3.open("1.txt");		f4.open("4.txt");
	string s1, s2, s3, s4;
	Sleep(2000);
	for(int i = 1;i <= 4;i++){
		system("cls");
		if(i==1){
			while(f1.eof() == 0){
				getline( f1 , s1 );
				cout << s1 << endl;
			}
			Sleep(1200);
		}
		if(i==2){
			while(f2.eof() == 0){
				getline( f2 , s2 );
				cout << s2 << endl;
			}
			Sleep(1200);
		}
		if(i==3){
			while(f3.eof() == 0){
				getline( f3 , s3 );
				cout << s3 << endl;
			}
			Sleep(1200);
		}	
		if(i==4){
			while(f4.eof() == 0){
				getline( f4 , s4 );
				cout << s4 << endl;
				Sleep(80);
			}
			Sleep(1200);
		}
	}
	f1.close();			f2.close();			f3.close();			f4.close();
}
