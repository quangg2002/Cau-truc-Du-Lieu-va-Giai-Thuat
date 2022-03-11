#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, d = 0;
		cin >> n;
		int a[n+5];
		for(int i = 0; i < n ; i++) cin >> a[i];
		for(int i = 0; i < n-1; i++){
			int min = i;
			for(int j = i+1; j < n ; j++){
				if(a[j] < a[min]) min = j;
			}
			if(i !=  min) d++;
			swap(a[i], a[min]);
		}
		cout << d << endl;
	}
}
