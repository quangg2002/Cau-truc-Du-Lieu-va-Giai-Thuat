#include<bits/stdc++.h>
using namespace std;
struct Point{
     double x, y;
};
void input(Point &a){
	cin>>a.x>>a.y;
}
double kc(Point a,Point b){
	double d1=b.x-a.x, d2= b.y-a.y;
	return sqrt(d1*d1+d2*d2);
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << kc(A,B) << endl;
    }
    return 0;
}
