#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;
	stack < int > st;
	while(cin >> s){
		if(s == "push"){
			cin >> n;
			st.push(n);
		}
		else if(s == "pop") st.pop();
		else if(s == "show"){
			if(st.size()){
				stack < int > tam;
				while(st.empty() == 0){
					tam.push(st.top());
					st.pop();
				}
				while(tam.empty() == 0){
					cout << tam.top() << " ";
					st.push(tam.top());
					tam.pop();
				}
				cout << endl;
			}
			else cout << "empty" << endl;
		}
	}
}
