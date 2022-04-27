#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int c=1;c<=t;c++){
		int n;
		scanf("%d",&n);
		int a[105],b[105];
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			b[i]=1;
		}
		printf("Test %d:\n",c);
		for(int i=0;i<n;i++){
			int dem=1;
			if(b[i]==1){
				for(int j=i+1;j<n;j++){
					if(a[i]==a[j]){
						dem++;
						b[j]=0;
					}
				}
				printf("%d xuat hien %d lan\n",a[i],dem);
			}
		}
	}
}
