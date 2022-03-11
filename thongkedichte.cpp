#include<bits/stdc++.h>
using namespace std;
int A[100][100], tong=0, m, n;

void nhiem(int x, int y){
	if(x>0&&y>0){
		if(A[x-1][y-1]!=-1){
			tong+=A[x-1][y-1];
			A[x-1][y-1]=0;
		}
	}
	if(y>0){
		if(A[x][y-1]!=-1){
			tong+=A[x][y-1];
			A[x][y-1]=0;
		}
	}
	if(x<m-1&&y>0){
		if(A[x+1][y-1]!=-1){
			tong+=A[x+1][y-1];
			A[x+1][y-1]=0;
		}
	}
	if(x<m-1){
		if(A[x+1][y]!=-1){
			tong+=A[x+1][y];
			A[x+1][y]=0;
		}
	}
	if(x<m-1&&y<n-1){
		if(A[x+1][y+1]!=-1){
			tong+=A[x+1][y+1];
			A[x+1][y+1]=0;
		}
	}
	if(y<n-1){
		if(A[x][y+1]!=-1){
			tong+=A[x][y+1];
			A[x][y+1]=0;
		}
	}
	if(x>0&&y<n-1){
		if(A[x-1][y+1]!=-1){
			tong+=A[x-1][y+1];
			A[x-1][y+1]=0;
		}
	}
	if(x>0){
		if(A[x-1][y]!=-1){
			tong+=A[x-1][y];
			A[x-1][y]=0;
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin >> A[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(A[i][j]==-1){
				nhiem(i,j);
			}
		}
	}
	cout<<tong;
}
