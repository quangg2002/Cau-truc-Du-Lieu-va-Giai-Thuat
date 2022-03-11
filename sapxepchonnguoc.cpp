#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, d = 0;
	cin >> n;
	int a[n+5];
	vector <int> v[n];
	for(int i = 0; i < n ; i++) cin >> a[i];
	for(int i = 0; i < n-1; i++){
		int min = i;
		for(int j = i+1; j < n ; j++){
			if(a[j] < a[min]) min = j;
		}
		swap(a[i], a[min]);
		for(int k = 0 ; k < n ; k++)  v[d].push_back(a[k]);
		d++;
	}
	for(int i = d -1; i >= 0 ; i--){
		cout << "Buoc " << i+1 << ": ";
		for(auto x : v[i]) cout << x << " ";
		cout << endl;
	}
}
