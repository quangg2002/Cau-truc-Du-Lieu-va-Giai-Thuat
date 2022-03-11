#include<bits/stdc++.h>
using namespace std;

int main(){
	int d=0;
	for(int i=1;i<=10000;i++){
		if(i%3!=0 && i%4!=0 && i%7!=0) d++;
	}
	cout<< d;
}
