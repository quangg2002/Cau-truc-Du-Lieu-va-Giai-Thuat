#include<bits/stdc++.h>
#include <windows.h>
using namespace std;

int main(){
	cout<<"\n\n\n\n\n\n\n\n\n\n\n";
	for(int i=1;i<=8;i++){
		cout<<"\t\t\t\t\t";
		for(int j=1;j<=9;j++){
			cout<<"\t";
			if(i==1 && (j==1 || j==4 || j==5 || j==6 || j==9 ) 
			|| i==2 && (j==5 )
			|| i==5 && (j==1 || j==9 )
			|| i==6 && (j==1 || j==2 || j==8 || j==9 )
			|| i==7 && (j==1 || j==2 || j==3 || j==7 || j==8 || j==9)
			|| i==8 && (j!=5 )) 	cout<<" ";
			else cout<<"H";
		}
		cout<<"\n\n";
	}
}
