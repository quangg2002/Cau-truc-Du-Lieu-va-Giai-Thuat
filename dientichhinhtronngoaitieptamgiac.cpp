#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
struct toado{
	double x,y;
};
double kc(toado a, toado b){
	double d1=a.x-b.x, d2=a.y-b.y;
	return sqrt(d1*d1+d2*d2);
}
int ktra(double a,double b,double c){
	if(a+b<=c||a+c<=b||b+c<=a) return 0;
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		struct toado a,b,c;
		cin>>a.x>>a.y>>b.x>>b.y>>c.x>>c.y;
		double m=kc(a,b), n=kc(b,c), p=kc(c,a);
		if(ktra(m,n,p)==0) cout<<"INVALID"<<endl;
		else{
			double tong=(m+n+p)*(m+n-p)*(m-n+p)*(n+p-m);
			double s=sqrt(tong)*0.25;
			double dt=(m*n*p)/(4*s);
			printf("%.3lf",PI*dt*dt);
			cout<<endl;
		}
	}
}
