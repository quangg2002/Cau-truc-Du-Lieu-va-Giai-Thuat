#include<bits/stdc++.h>
using namespace std;

int main(){
	int s1, s2, f1, f2;
	cin>> s1 >> s2 >> f1 >> f2;
	int a=abs(f1-s1), b=abs(f2-s2);
	if(a>b) cout<<a;
	else cout<<b;
}
