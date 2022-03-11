#include<stdio.h>
#include<math.h>
int shh(int n){
	int s=0;
	for(int i=1;i<=sqrt(n);i++){
		if(n%i==0){
			s+=i;
			int k=n/i;
			if(k!=n&&k!=sqrt(k)) s+=k;
		}	
	}
	if(s==n) return 1;
	return 0;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++){
		if(shh(i)) printf("%d ",i);
	}
}
