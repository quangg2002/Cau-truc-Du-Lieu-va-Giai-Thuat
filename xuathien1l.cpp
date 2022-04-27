#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[100];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;		
			}
		}
	}
	for(int i=0;i<n;i++){
		int ktr=0;
		int dem=1;
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				ktr=1;
				break;
			}
		}
		if(ktr==0){
			printf("%d ",a[i]);
		}
	}
}
