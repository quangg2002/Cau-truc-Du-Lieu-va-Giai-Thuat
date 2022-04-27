#include<bits/stdc++.h>
using namespace std;
void hoa(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=65&&s[i]<=90){
			s[i]+=32;
		}
	}
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		char s[1005]="";
		char s1[1005]="";
		cin>>s;
		hoa(s);
		int n=strlen(s);
		int l1=0;
		for(int i=0;i<n;i++){
			if(s[i]=='a'||s[i]=='b'||s[i]=='c'){
				s1[l1++]='2';
			} 
			if(s[i]=='d'||s[i]=='e'||s[i]=='f'){
				s1[l1++]='3';
			}
			if(s[i]=='g'||s[i]=='h'||s[i]=='i'){
				s1[l1++]='4';
			}
			if(s[i]=='j'||s[i]=='k'||s[i]=='l'){
				s1[l1++]='5';
			}
			 if(s[i]=='m'||s[i]=='n'||s[i]=='o'){
				s1[l1++]='6';
			}
			 if(s[i]=='p'||s[i]=='q'||s[i]=='r'||s[i]=='s'){
				s1[l1++]='7';
			}
			if(s[i]=='t'||s[i]=='u'||s[i]=='v'){
				s1[l1++]='8';
			}
			 if(s[i]=='w'||s[i]=='x'||s[i]=='y'||s[i]=='z'){
				s1[l1++]='9';
			}
		}
		int ktra=1;
		for(int i=0;i<l1/2;i++){
			if(s1[i]!=s1[l1-i-1]){
				ktra=0;
				break;
			}
		}
		if(ktra==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

