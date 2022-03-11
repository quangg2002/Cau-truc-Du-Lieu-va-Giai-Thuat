#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>> t;
	while(t--){
		string x, y;
		cin>>x; reverse(x.begin(), x.end());
		cin>>y; reverse(y.begin(), y.end());
		if(x.length()< y.length()) swap(x, y);
		int l1= x.length(), l2= y.length();
		for(int i= l2; i< l1; i++)	y+= "0";
		int nho= 0, t;
		for (int i= 0; i< l1; i++){
			t= x[i]-'0'+ y[i]-'0'+ nho;
			x[i]= (t%10)+ '0';
			nho= t/10;
		}
		if(nho!= 0) x+= "1";
		reverse(x.begin(), x.end());
		cout<< x<< endl;
	}
}
