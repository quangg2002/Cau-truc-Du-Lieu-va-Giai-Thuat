#include<bits/stdc++.h>
using namespace std;

struct SoPhuc{
	int ao, thuc;
};
SoPhuc binh_phuong_tong(SoPhuc A, SoPhuc B){
	SoPhuc Tong;
	Tong.thuc=(A.thuc+B.thuc)*(A.thuc+B.thuc) - (A.ao+B.ao)*(A.ao+B.ao);
	Tong.ao=2*(A.thuc+B.thuc)*(A.ao+B.ao);
	return Tong;
}
void hien_thi(SoPhuc C){
	cout<<C.thuc<<" + "<<C.ao<<"i"<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
