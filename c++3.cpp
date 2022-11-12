#include<bits/stdc++.h>
using namespace std;


void selectionSort(int arr[], int n){
	int min;
	int i, j;
	for(i = 0; i < n - 1; i++){
		min = i;
		for(j = i + 1; j < n; j++){
			if(arr[j] < arr[min]) min = j;
		}
		swap(arr[min], arr[i]);
	}
}

int main(){
	int arr[8] = {2,1,7,3,6,3,5,9};
	selectionSort(arr, 8);
	for(auto x : arr) cout << x << " ";
}
