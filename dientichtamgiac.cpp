#include<stdio.h>
#include<string.h>
#include<math.h>
struct toado{
	double x,y;
};
double kc(struct toado p, struct toado q){
	double kc1=p.x-q.x , kc2=p.y-q.y;
	return sqrt(kc1*kc1+kc2*kc2);
}
int ktr(double d1,double d2,double d3){
	if(d1+d2<=d3||d2+d3<=d1||d1+d3<=d2) return 0;
	return 1;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		struct toado A,B,C;
		scanf("%lf%lf%lf%lf%lf%lf",&A.x,&A.y,&B.x,&B.y,&C.x,&C.y);
		double d1=kc(A,B), d2=kc(B,C) ,d3=kc(A,C);
		if(ktr(d1,d2,d3)==0) printf("INVALID\n");
		else printf("%lf")
	}
}
