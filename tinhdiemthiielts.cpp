#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	float a[50];
	a[3]=2.5;	a[4]=2.5;
	a[5]=3;		a[6]=3;		a[7]=3.5;	a[8]=3.5;	a[9]=3.5;	a[10]=4;	a[11]=4;	a[12]=4;	a[13]=4.5;
	a[14]=4.5;	a[15]=4.5;	a[16]=5;	a[17]=5;	a[18]=5;	a[19]=5;	a[20]=5.5;	a[21]=5.5;	a[22]=5.5;
	a[23]=6;	a[24]=6;	a[25]=6;	a[26]=6;	a[27]=6.5;	a[28]=6.5;	a[29]=6.5;	a[30]=7;	a[31]=7;
	a[32]=7;	a[33]=7.5;	a[34]=7.5;	a[35]=8;	a[36]=8;	a[37]=8.5;	a[38]=8.5;	a[39]=9;	a[40]=9;
	while(n--){
		int x, y;
		float z, t, sum;
		cin>>x>>y>>z>>t;
		sum=a[x]+a[y]+z+t;
		sum/=4;
		int tong1 = sum;
		sum*=100;
		int tong2 = sum;
		tong2%=100;
		sum/=100;
		if( tong2>=25 && tong2<75){
			sum=tong1+0.5;
			cout <<fixed << setprecision(1) << sum <<endl;
		}
		if(tong2>=75){
			sum=tong1+1;
			cout <<fixed << setprecision(1) << sum <<endl;
		}
		if(tong2<25){
			sum=tong1+0.0;
			cout <<fixed << setprecision(1) << sum <<endl;
		}
	}	
}
