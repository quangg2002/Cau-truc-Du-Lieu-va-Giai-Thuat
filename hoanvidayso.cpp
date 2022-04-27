#include<bits/stdc++.h>
using namespace std;

int a[1000], dd[1001], n, b[1000];

void in(){
	for(int i = 0; i < n; i++) cout << b[a[i]] << " ";
	cout << endl;
}
void Try(int i){
	for(int j = 0; j < n; j++){
		if(dd[j] == 0){
			a[i] = j;
			dd[j] = 1;
			if(i == n-1) in();
			else{
				Try(i+1);
			}
			dd[j] = 0;
		}
	}
}

int main(){
	cin >> n;
	for(int i = 0; i < n; i++) cin >> b[i];
	sort(b,b+n);
	Try(0);
	cout << endl;
}
