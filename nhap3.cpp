#include<bits/stdc++.h>
using namespace std;

struct SinhVien{
	string ten, lop, ns;
	float gpa;
};

void nhap(SinhVien ds[],int n){
	for(int i=0; i < n; i++){
		scanf("\n");
		getline(cin , ds[i].ten);
		cin >> ds[i].lop >> ds[i].ns >> ds[i].gpa;
		if(ds[i].ns[2]=='/') ds[i].ns.insert(0,"0");
		if(ds[i].ns[4]=='/') ds[i].ns.insert(3,"0");
	}
}
void in(SinhVien ds[], int n){
	for(int i=0; i < n; i++){
		cout << "B20DCCN0";
		if(i < 10) cout << "0";
		cout<< i+1 << 
		string s;
		stringstream p(ds[i].ten);
		while( p >> s){
			for(int i=0 ;i < s.length() ;i++ ) s[i]=tolower(s[i]);
			s[0]=toupper(s[0]);
			cout << s <<" ";
		}
		cout << ds[i].lop <<" "<< ds[i].ns <<" ";
		cout << fixed << setprecision(2) << ds[i].gpa; 
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
