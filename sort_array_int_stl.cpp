#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n = 5;
	int arr[5] = {4,-1,3,-9,0};
	sort(arr, arr+n);

	for(int i=0;i<n;i++){
		cout << arr[i]<<"\t";
	}
  
}
