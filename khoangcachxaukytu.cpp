#include<bits/stdc++.h>
using namespace std;


int main(){
    int t, n;
    cin >> t;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(t--){
        string a, b;
        set < string > s1;
        //set < char > s2;
        queue < pair < string, int > > q;
        cin >> n >> a >> b;
        for(int i = 0; i < n; i++){
            string x;
            cin >> x;
            s1.insert(x);
            //for(int j = 0; j < x.size(); j++) s2.insert(x[j]);
        }
        s1.erase(a);
        q.push({a, 1});
        while(!q.empty()){
            string c = q.front().first, e = c;
            int d = q.front().second;
            q.pop();
            if(c == b){
                cout << d << endl;
                break;
            }
            for(int i = 0; i < c.size(); i++){
                for(char j = 'A'; j <= 'Z'; j++){
                    c[i] = j;
                    if(s1.find(c) != s1.end()){
                        s1.erase(c);
                        q.push({c, d + 1});
                    }
                }
                c = e;
            }
        }
    }
}
