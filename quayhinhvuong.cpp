#include<bits/stdc++.h>
using namespace std;

int qt[] = {3, 0, 2, 4, 1, 5};
int qp[] = {0, 4, 1, 3, 5, 2};

string xqt(string b){
    string a = "";
    for(int i = 0; i < 6; i++)  a += b[qt[i]];
    return a;
}
string xqp(string b){
    string a = "";
    for(int i = 0; i < 6; i++)  a += b[qp[i]];
    return a;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b;
        for(int i = 0; i < 6; i++){
            int x;
            cin >> x;
            a += to_string(x);
        }
        for(int i = 0; i < 6; i++){
            int x;
            cin >> x;
            b += to_string(x);
        }
        pair < string, int > p, t;
        queue < pair < string, int > > q;
        p.first = a;
        p.second = 0;
        q.push(p); 
        while(!q.empty()){
            p = q.front();
            q.pop();
            if(p.first == b){
                cout << p.second << endl;
                break;
            }
            t.second = p.second + 1;
            t.first = xqt(p.first);
            q.push(t);
            t.first = xqp(p.first);
            q.push(t);
        }
    }
}