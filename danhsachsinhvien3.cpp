#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	int stt;
	char ten[55];
	string lop,ns;
	float diem;
};
void nhap(SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		ds[i].stt=i+1;
		scanf("\n");
		cin.getline(ds[i].ten,55);
		getline(cin,ds[i].lop);
		getline(cin,ds[i].ns);
		cin>>ds[i].diem;
		if(ds[i].ns[1]=='/') ds[i].ns.insert(0,"0");
		if(ds[i].ns[4]=='/') ds[i].ns.insert(3,"0");
	}
}
void sapxep(SinhVien ds[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(ds[i].diem<ds[j].diem){
				struct SinhVien t=ds[i];
				ds[i]=ds[j];
				ds[j]=t;
			}
		}
	}
}
void in(SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		cout<<"B20DCCN0";
		for(int j=(ds[i].stt/10);j<1;j++) cout<<"0";
		cout<<ds[i].stt<<" ";
		int l=strlen(ds[i].ten);
		for(int j=0;j<l;j++) ds[i].ten[j]=tolower(ds[i].ten[j]);
		char* p=strtok(ds[i].ten," ");
		while(p!=NULL){
			p[0]=toupper(p[0]);
			cout<<p<<" ";
			p=strtok(NULL," ");
		}
		cout<<ds[i].lop<<" "<<ds[i].ns<<" ";
		cout<< fixed <<setprecision(2)<<ds[i].diem<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
