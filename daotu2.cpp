#include<bits/stdc++.h>
using namespace std;
main(){
    int t;
    cin>>t;
    while(t--){
        vector<string>ve;
        scanf("\n");
        string s,token;
        getline(cin,s);
        stringstream ss(s);
        while(ss>>token){
            reverse(token.begin(),token.end());
            ve.push_back(token);
        }
        for(int i=0;i<ve.size();i++){
            if(i<ve.size()-1){
                cout<<ve[i]<<" ";
            }else{
                cout<<ve[i];
            }
        }
        cout<<endl;
    }
}
