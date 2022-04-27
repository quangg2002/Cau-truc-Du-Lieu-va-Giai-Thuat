#include<bits/stdc++.h>
using namespace std;

int main(){
	long long tu, mau, kq;
	int t;
	cin>>t;
	while(t--){
		cin>>tu>>mau;
		while(1){
			if(mau % tu==0){
				cout<< "1/"<< mau/tu << "\n";
				break;
			}
			else{
				kq = mau/tu +1;
				cout<< "1/"<< kq << " + ";
				tu = tu * kq - mau;
				mau= mau * kq;
			}
		}
	}
}
