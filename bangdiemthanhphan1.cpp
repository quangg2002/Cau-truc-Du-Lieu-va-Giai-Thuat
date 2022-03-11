#include<bits/stdc++.h>
using namespace std;
struct bd{
	char ma[20],ten[55],lop[25];
	float d1,d2,d3;
}ds[105];
int n;
void nhap(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin.ignore();
		cin.getline(ds[i].ma,20);
		cin.getline(ds[i].ten,55);
		cin.getline(ds[i].lop,25);
		cin>>ds[i].d1>>ds[i].d2>>ds[i].d3;
	}
}
void sapxep(){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(strcmp(ds[i].ma,ds[j].ma)>0){
				struct bd t=ds[i];
				ds[i]=ds[j];
				ds[j]=t;
			}
		}
	}
}
void in(){
	for(int i=0;i<n;i++){
		cout<<i+1<<" "<<ds[i].ma<<" "<<ds[i].ten<<" "<<ds[i].lop<<" ";
		printf("%.1f %.1f %.1f\n",ds[i].d1,ds[i].d2,ds[i].d3);
	}
}
int main(){
	nhap();
	sapxep();
	in();
}
