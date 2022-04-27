#include<bits/stdc++.h>
using namespace std;

int n;
void tn(int a[], int r[]){
    stack < int > st;
    for(int i = 0; i < n; i++){
		while(!st.empty() && a[st.top()] >= a[i]) st.pop();
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
		else l[i] = n;
		st.push(i); 
	}
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        int a[100005], l[100005], r[100005];
        long long dt = 0;
        for(int i = 0; i < n; i++) cin >> a[i];
        tn(a, r);
        pn(a, l);
        for(int i = 0; i < n; i++){
            long long ans;
            ans = a[i] * (l[i] - r[i] - 1);
            dt = max(dt, ans);
        } 
        cout << dt << endl;
    }
}
