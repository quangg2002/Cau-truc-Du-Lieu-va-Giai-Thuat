#include<bits/stdc++.h>
using namespace std;

char c;
int n, a[100], dd[100] = {0};
int kt(){
	for (int i = 2; i <= n - 1; i++)
        if ((a[i] == 1 || a[i] == 5) && (a[i - 1] != 1 && a[i - 1] != 5) && (a[i + 1] != 1 && a[i + 1] != 5))	return 0;
    return 1;
}
void ql(int i){
	for(int j = 1; j <= n; j++){
		if(dd[j] == 0){
			a[i] = j;
			dd[j] = 1;
			if(i == n){
				if(kt()){
					for(int i = 1; i <= n; i++) cout << (char)(a[i] + 'A' -1);
					cout << endl;
				}
			}
			else ql(i + 1);
			dd[j] = 0;
		}
	}
}
int main(){
	cin >> c;
	n = c - 'A' + 1;
	ql(1);
}
