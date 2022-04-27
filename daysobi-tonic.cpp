#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n + 5], dd[n + 5], dd1[n + 5], s = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            dd[i] = a[i];
            for(int j = 0; j < i; j++){
                if(a[i] > a[j] && dd[i] < dd[j] + a[i]) dd[i] = dd[j] + a[i]; 
            }
        }
        for(int i = n - 1; i >= 0; i--){
            dd1[i] = a[i];
            for(int j = n - 1; j > i; j--){
                if(a[i] > a[j] && dd1[i] < dd1[j] + a[i]) dd1[i] = dd1[j] + a[i]; 
            }
            s = max(s, dd[i] + dd1[i] - a[i]);
        }
    //    for(int i = 0; i < n; i++) cout << dd[i] << " ";
        cout << s << endl;
    //    for(int i = 0; i < n; i++) cout << dd1[i] << " ";
    }
}