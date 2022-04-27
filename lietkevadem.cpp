#include<stdio.h>
int main(){
	int a[105],b[105];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=1;
	}
	for(int i=0;i<n;i++){
		int dem=1;
		if(b[i]==1){
			for(int j=i+1;j<n;j++){
				if(a[i]==a[j]){
					dem++;
					b[j]=0;
				}
			}
			printf("%d %d\n", a[i], dem);
		}
	}
}
