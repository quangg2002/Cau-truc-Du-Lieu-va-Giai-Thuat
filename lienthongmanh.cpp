#include <bits/stdc++.h>
using namespace std;

int dd[1005], n, c;
vector < vector < int > > v(1005), vnc(1005);
stack < int > st;

void dfs(int dinh){
    dd[dinh] = 1;
    for(int i = 0; i < v[dinh].size(); i++){
        if(!dd[v[dinh][i]]) dfs(v[dinh][i]);
    }
    st.push(dinh); // đỉnh đã duyệt xong
    //cout << dinh << " ";
}

void dfs2(int dinh){
    dd[dinh] = 1;
    for(int i = 0; i < vnc[dinh].size(); i++){
        if(!dd[vnc[dinh][i]]) dfs2(vnc[dinh][i]);
    }
}

int ltm(){
    memset(dd, 0, sizeof(dd));
    for(int i = 1; i <= n; i++) if(!dd[i]) dfs(i);
    int cnt  = 0;
    memset(dd, 0, sizeof(dd));
    while(!st.empty()){
        int x = st.top();
        st.pop();
        if(!dd[x]){
            dfs2(x);
            cnt++;
        }
    }
    return cnt;
}


int main(){
    cin >> n >> c;
    for(int i = 0; i < c; i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        vnc[y].push_back(x);
    }
    cout << ltm();
}
