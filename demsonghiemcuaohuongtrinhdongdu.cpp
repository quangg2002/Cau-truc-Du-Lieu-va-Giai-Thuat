#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long b, p, dem= 0;
        cin >> b >> p;
        long long q;
        if(b<p){
        	q=b;
        	for(long long i=1;i<=q;i++){
        		if((i*i)%p==1) dem++;
        	}
        }
		else{
			q=p;
        	for(long long i=1;i<=q;i++){
        		if((i*i)%p==1) dem++;
        	}
        }
        if(q==b) cout<<dem<<endl;
        else {
        	dem*=b/p;
        	q=b%p;
        	for(int i=1;i<=q;i++){
        		if((i*i)%p==1) dem++;
        	}
        	cout<<dem<<endl;
        }
    }
}
