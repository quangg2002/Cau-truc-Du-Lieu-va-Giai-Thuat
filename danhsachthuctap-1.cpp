#include<bits/stdc++.h>
using namespace std;
struct ThucTap{
	string msv,ht,lop,email,dn;
	int stt;
};
void nhap(ThucTap &a){
	getline(cin, a.msv);
    getline(cin, a.ht);
    getline(cin, a.lop);
    getline(cin, a.email);
    getline(cin, a.dn);
}
int cmp(ThucTap a, ThucTap b){
	if(a.msv<b.msv) return 1;
	return 0;
}
void in(ThucTap a){
	cout << a.stt << " " << a.msv << " " << a.ht << " " << a.lop << " " << a.email << " " << a.dn << endl;
}
int main(){
	int n,q;
	cin>>n;
	cin.ignore();
	struct ThucTap ds[n];
	for(int i=0;i<n;i++){
		nhap(ds[i]);
		ds[i].stt=i+1;
	}
	cin>>q;
	cin.ignore();
	string doanhnghiep[q];
	for(int i=0;i<q;i++) getline(cin,doanhnghiep[i]);
	sort(ds,ds+n,cmp);
	for(int i=0;i<q;i++){
		for(int j=0;j<n;j++){
			if(ds[j].dn==doanhnghiep[i]) in(ds[j]);
		}
	}
}

