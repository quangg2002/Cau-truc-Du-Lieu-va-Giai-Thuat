#include<bits/stdc++.h>
using namespace std;

class MonHoc{
	public:
		string ma, ten;
		friend istream & operator >> (istream &in, MonHoc &x){
			getline (cin , x.ma);
			getline (cin , x.ten);
			return in;
		}
};

class LichThi{
	public:
		string mct , mmh, ngay, gio, nhom;
		friend istream & operator >> (istream &in, LichThi &x){
			cin >> x.mmh >>x.ngay>>x.gio>>x.nhom;
			x.mct="T";
			x.mct+= d / 100 + '0';
			x.mct +=(d % 100) / 10 +'0';
			x.mct += d %10 + '0';
			d++;
			return in;
		}
		friend ostream & operator << (ostream &out, LichThi x){
			out << x.mmh <<" "<< a.ten << a.ngay << " " << a. gio <<" "<< a.nhom <<endl;
			return out;
		}	
};
bool ngay( string a, string b){
	string c , y="", z , t="";
	a[2]=' ';
	a[5]=' ';
	b[2]=' ';
	b[5]=' ';
	stringstream p(a);
	stringstream pp(b);
	while(p>>c && pp >>z){
		reverse(c.begin(), c.end()); y+=c;
		reverse(z.begin(), z.end()); t+=z;
	}
	reverse(y.begin(), y.end()); 
	reverse(t.begin(), t.end()); 
	return t < y;
}
bool cmp(LichThi a, LichThi b){
	if(a.ngay!=b.ngay) return ngay(a.ngay, b.ngay);
	else {
		if(a.gio != b.gio ){
			return a.gio < b.gio;
		}else{
			return a.mmh < b.mmh;
		}
	}
	
}

int main() {
	int n, m;
	cin >> n >> m;
	cin.ignore();
	MonHoc mh[100];
	LichThi lt[1000];
	for (int i = 0; i < n; i++) {
		cin >> mh[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> lt[i];
	}
	process(mh, n, lt, m);
	for (int i = 0; i < m; i++) {
		cout << lt[i];
	}
}
