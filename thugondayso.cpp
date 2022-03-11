#include<bits/stdc++.h> 
using namespace std;

int res(vector<int> a, int n) {
    for(int i = 0; i < a.size() - 1; i++) {
        int c = a[i] + a[i+1];
        if(c % 2 == 0) {
            a.erase(a.begin()+i, a.begin()+i+2);
            i = -1;
        }
        if(a.size() == 0) return 0;
    }
    return a.size();
}

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	cout << res(a, n);
}
