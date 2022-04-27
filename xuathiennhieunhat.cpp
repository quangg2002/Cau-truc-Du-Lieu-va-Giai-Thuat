#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,max=1;
		scanf("%d",&n);
		int a[100],b[30000]={0};
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[a[i]]++;
			if(b[a[i]]>1) a[i]=30001;
		}
		for(int i=0;i<30000;i++) if(b[i]>max) max=b[i];
		for(int i=0;i<n;i++) if(b[a[i]]==max) printf("%d ",a[i]);
		printf("\n");
	}
}
