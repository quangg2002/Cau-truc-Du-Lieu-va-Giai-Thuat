#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int c[1001][1001];

/*1 0 0 0 0
  1 1 0 0 0
  1 2 1 0 0
  1 3 3 1 0
  1 4 6 3 1
*/

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		for(int i=0;i<=1000;i++){
			for(int j=0;j<=i;j++){
				if(j==0 || j==i) c[i][j]=1;
				else{
					c[i][j]= ( c[i-1][j-1]+c[i-1][j] ) % mod ;
				}
			}
		}
		cout<<c[n][k]<<endl;
	}
}
