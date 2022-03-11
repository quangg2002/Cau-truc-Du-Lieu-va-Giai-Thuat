#include<bits/stdc++.h>
using namespace std;
struct MH{
	string ten,nhom;
	int stt;
	float giamua, giaban,loinhuan;
};
void nhap(MH &a){
	getline(cin, a.ten);
	getline(cin, a.nhom);
	cin>>a.giamua>>a.giaban;
	a.loinhuan=a.giaban-a.giamua;
}
int cmp(MH a,MH b){
	if(a.loinhuan>b.loinhuan) return 1;
	return 0;
}
void in(MH a){
	cout<<a.stt<<" "<<a.ten<<" "<<a.nhom<<" ";
	cout<<fixed<<setprecision(2)<<a.loinhuan<<endl;
}
int main(){
	int n;
	cin>>n;
	struct MH ds[n];
	for(int i=0;i<n;i++){
		cin.ignore();
		nhap(ds[i]);
		ds[i].stt=i+1;
	}
	sort(ds,ds+n,cmp);
	for(int i=0;i<n;i++) in(ds[i]);
}
