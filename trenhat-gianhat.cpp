#include<bits/stdc++.h>
using namespace std;
struct GT{
	string ten,ns,ngay,thang,nam;
};
void nhap(GT &a){
	getline(cin,a.ten);
	getline(cin,a.ns);
	a.ngay=a.ns.substr(0,2);
	a.thang=a.ns.substr(3,2);
	a.nam=a.ns.substr(6,4);
}
int cmp(GT a,GT b){
	if(a.nam<b.nam) return 1;
	if(a.nam==b.nam){
		if(a.thang < b.thang) return 1;
        if(a.thang == b.thang){
            if(a.ngay < b.ngay) return 1;
        }
	}
	return 0;
}
void sapxep(GT ds[],int n){
	sort(ds,ds+n,cmp);
}
void in(GT ds[],int n){
	cout<<ds[n-1].ten<<endl<<ds[0].ten;
}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	struct GT ds[n];
	for(int i=0;i<n;i++) nhap(ds[i]);
	sapxep(ds,n);
	in(ds,n);
}
