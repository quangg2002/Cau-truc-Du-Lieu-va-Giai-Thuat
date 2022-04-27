#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	long long td = 0, ta = 0;
	for(int i =0 ; i < n ;i++){
		int x;
		scanf("%d",&x);
		if(i < 0) ta += i;
		if(i > 0) td += i;
	}
	printf("%d\n%d", td, ta);
}
