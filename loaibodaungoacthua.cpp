#include<bits/stdc++.h>
using namespace std;

string xoadaucach(string x){
    string s = "";
    for(int i = 0; i < x.size(); i++){
        if(x[i] != ' ') s += x[i];
    }
    return s;
}

string xoangoacthua(string x){
    stack < char > st;
    stack < int > index;
    int dd[1000] = {0};
    for(int i = 0; i < x.size(); i++){
        if(x[i] == ')'){
            int kt = 0;
            while(st.top() != '('){
                char c = st.top();
                if(c == '+' || c == '-') kt = 1;
                st.pop();
                index.pop();
            }
            if(kt == 0){
                dd[index.top()] = -1;
                dd[i] = -1;
            }
            st.pop();
            index.pop();
        }else{
            st.push(x[i]);
            index.push(i);
        }
    }
    string s = "";
    for(int i = 0; i < x.size(); i++) if(dd[i] != -1) s += x[i];
    return s;
}

string xoadau(string x){
    stack < char > st;
    stack < int > index;
    int dd[1000] = {0};
    for(int i = x.size() - 1; i >= 0; i--){
        if(x[i] == '('){
            int kt = 0;
            if(i == 0 || x[i - 1] != '-') kt = 1;
            while(st.top() != ')'){
                st.pop();
                index.pop();
            }
            if(kt == 1){
                dd[index.top()] = -1;
                dd[i] = -1;
            }
            st.pop();
            index.pop();
        }else{
            st.push(x[i]);
            index.push(i);
        }
    }
    string s = "";
    for(int i = 0; i < x.size(); i++) if(dd[i] != -1) s += x[i];
    return s;
}

int  main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin, s);
        string s1 = xoadaucach(s);
        string s2 = xoangoacthua(s1);
        string s3 = xoadau(s2);
        cout << s3 << endl;
    }
}