#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten,lop,ns;
	float d;
};
void nhap( SinhVien &A){
 	getline(cin, A.ten);
    getline(cin, A.lop);
    getline(cin, A.ns);
    cin>>A.d;
	if(A.ns[1] == '/') A.ns.insert(0, "0");
    if(A.ns[4] == '/') A.ns.insert(3, "0");
}
void in(SinhVien A){
	cout<<"B20DCCN001"<<" "<<A.ten<<" "<<A.lop<<" "<<A.ns<<" ";
	cout << fixed << setprecision(2) << A.d;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
