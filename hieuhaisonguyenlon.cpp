#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>> t;
	cin.ignore();
	while(t--){
		string x, y;
		cin>> x; 
		cin>> y;
		if(x.length()< y.length()) swap(x, y);
		else if(x.length()== y.length() && x< y) swap(x, y);
		int l1= x.length(), l2= y.length();
		reverse(x.begin(), x.end());
		reverse(y.begin(), y.end());
		for(int i= l2; i< l1; i++)
			y+= "0";
		int nho= 0;
		for (int i= 0; i< l1; i++){
			if(((x[i]-'0')-nho)< (y[i]-'0')){
				x[i]=((x[i]-'0')- nho+ 10- (y[i]-'0'))+ '0';
				nho= 1;
			}
			else{
				x[i]= ((x[i]-'0')-nho-(y[i]-'0'))+ '0';
				nho= 0;
			}
		}
		reverse(x.begin(), x.end());
		cout<< x<< endl;
	}
}
