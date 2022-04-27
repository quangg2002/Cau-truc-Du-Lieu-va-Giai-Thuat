#include<bits/stdc++.h>
using namespace std;

int a[1005][1005];
int main(){
    int n;
    cin >> n;
    vector < int > v[1005];
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(a[i][j] == 1) v[i].push_back(j + 1);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}