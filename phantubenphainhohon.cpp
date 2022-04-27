#include<bits/stdc++.h>
using namespace std;

int n;
void pl(int a[], int r[]){
    stack < int > st;
    for(int i = n - 1; i >= 0; i--){
		while(!st.empty() && a[st.top()] <= a[i]) st.pop();
		if(!st.empty()) r[i] = st.top();
		else r[i] = -1;
		st.push(i); 
	}
}
void pn(int a[], int l[]){
    stack < int > st;
    for(int i = n - 1; i >= 0; i--){
		while(!st.empty() && a[st.top()] >= a[i]) st.pop();
		if(!st.empty()) l[i] = st.top();
		else l[i] = -1;
		st.push(i); 
	}
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n + 5], l[100000], r[100000];
        for(int i = 0; i < n; i++) cin >> a[i];
        pl(a, r);
        pn(a, l);
        for(int i = 0; i < n; i++){
            if(r[i] != -1 && l[r[i]] != -1){
                cout << a[l[r[i]]] << " ";
            }else cout << -1 << " ";
        } 
        cout << endl;
    }
}
