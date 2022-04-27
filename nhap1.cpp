#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n=10;
	int a;
	cin>>a;
	while(a/n>0) n*=10;
	cout<<n<<" "<<a;
}
