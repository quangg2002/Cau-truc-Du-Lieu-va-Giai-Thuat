#include<bits/stdc++.h>
using namespace std;
int b[1000005];
int main(){
	int t;
	cin>> t;
	while(t--){
		int n,x;
		cin>> n;
		for(int i= 0; i< 1000005; i++) b[i]= 0;
		for(int i= 0; i< n; i++){
			cin>> x;
			if(x>0) b[x]++;
		}
		for(int i= 1; i< 1000005; i++){
			if(b[i]== 0){
				cout<< i<< " ";
				break;
			}
		}
		cout<< endl;
	}
}
