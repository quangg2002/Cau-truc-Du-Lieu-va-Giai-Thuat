#include <bits/stdc++.h>
using namespace std;
int main() {
    int dem = 0, cnt = 0;
    stack < int > s;
    string X;
    cin >> X;
    int sqr[1005];
    for (int i = 0; i < X.size(); i++) {
        if (X[i] = '[' || X[i] == ']') cnt++;
        sqr[i] = cnt;
    }
    for (int i = 0; i < X.size(); i++) {
        if (X[i] == '(' || X[i] == '[') {
            s.push(i);
        } else {
            if (!s.empty() && X[i] == ')' && X[s.top()] == '(') s.pop();
            if (!s.empty() && X[i] == ']' && X[s.top()] == '[') s.pop();
            if (s.size() >= 0) dem = max(dem, sqr[i] - sqr[s.top()]);
        }
    }
    cout << dem << endl;
}