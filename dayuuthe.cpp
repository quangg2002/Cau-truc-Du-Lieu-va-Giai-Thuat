#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n=0, a[200];
	    char c;
	    do{
	        cin>>a[n++];
	        c = getchar();
	    } while(c!='\n');
	    int demchan=0, demle=0, kt=1;
	    for(int i=0; i<n; i++){
	    	if(a[i]%2==0) demchan++;
	    	else demle++;
		}
		if(n%2==0 && demchan>demle) {
			cout<<"YES"<<endl; kt=0;
		}
		if(n%2==1 && demchan<demle) {
			cout<<"YES"<<endl;  kt=0;
		}
		if(kt) cout<<"NO"<<endl;
	}
}
