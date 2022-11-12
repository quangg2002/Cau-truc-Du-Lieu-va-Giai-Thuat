#include<bits/stdc++.h>
using namespace std;

vector < int > ktra(10000, 1);
void ngto(){
    for(int i = 2; i <= sqrt(9999); i++){
        if(ktra[i]){
            for(int j = i * i; j <= 9999; j += i){
                ktra[j] = 0;
            }
        }
    }
}

int main(){
    int t;
    cin >> t;
    ngto();
    while(t--){
        string a, b;
        cin >> a >> b;
        int dd[10000] = {0};
        dd[stoi(a)]++;
        queue < pair < string, int > > q;
        q.push({a, 0});
        while(!q.empty()){
            string x, z;
            x = q.front().first;
            z = x;
            int y = q.front().second;
            q.pop();
            if(x == b){
                cout << y << endl;
                break;
            }
            for(int i = 0; i < 4; i++){
                int vt = 0;
                if (i == 0) vt++;
                for(int j = vt; j <= 9; j++){
                    x[i] = j + '0';
                    if(!dd[stoi(x)] && ktra[stoi(x)]){
                        dd[stoi(x)]++;
                        q.push({x, y + 1});
                    } 
                }
                x = z;
            }
        }
    }
}