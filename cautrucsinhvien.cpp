#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	char ten[100],ns[25];
	float d1,d2,d3,sum;
};
void nhap( ThiSinh &A){
	cin.getline(A.ten,100);
	cin>>A.ns;
	cin>>A.d1>>A.d2>>A.d3;
	A.sum=A.d1+A.d2+A.d3;
}
void in(ThiSinh A){
	cout<<A.ten<<" "<<A.ns<<" ";
	printf("%.1f",A.sum);
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
