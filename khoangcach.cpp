#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
struct toado{
	double x,y;
};
double kc(struct toado A,struct toado B ){
	double d1=A.x-B.x, d2=A.y-B.y;
	return sqrt(d1*d1+d2*d2);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		struct toado A,B;
		cin>>A.x>>A.y>>B.x>>B.y;
		printf("%.4lf\n",kc(A,B));
	}
}
