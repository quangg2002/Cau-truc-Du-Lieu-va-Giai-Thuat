#include<bits/stdc++.h>
using namespace std;
struct tg{
	int g,p,s,t;
};
struct tg ds[5005];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ds[i].g>>ds[i].p>>ds[i].s;
		ds[i].t=ds[i].g*3600+ds[i].p*60+ds[i].s;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].t>ds[j].t){
				struct tg t=ds[i];
				ds[i]=ds[j];
				ds[j]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<ds[i].g<<" "<<ds[i].p<<" "<<ds[i].s<<endl;
	}
}
