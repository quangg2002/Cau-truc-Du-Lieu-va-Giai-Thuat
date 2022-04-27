#include<stdio.h>
#include<string.h>
int main(){
	long long count= 1, s= 0;
	char n[100005];
	scanf("%s", &n);
	int l= strlen(n);
	for(int i= 0; i< l; i++){
		s+= (int)n[i]-48;
	}
	while(s>= 10){
		long long x= s, c= 0;
		while(x> 0){
			c+= x%10;
			x/= 10;
		}
		s= c;
		count++;
	}
	printf("%lld", count);
}
