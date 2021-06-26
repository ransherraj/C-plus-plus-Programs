#include<iostream>
#include<array>
#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
void init_code(){
	fast_io;
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif 
}


int main(){
	init_code();
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];

	}
	int c1=0;
	int c2=0;
	int max = arr[0];
	int min = arr[0];

	for(i=0;i<n;i++){

		if(max<arr[i]){
			max = arr[i];

		}
		if(min>arr[i]){
			min = arr[i];

		}
	}

	cout<<"Maximum Element in arry: "<<max<<endl<<"Minimum Element in arry: "<<min<<endl;

	sort(arr,arr+n);
	cout<<"Second Maximum Element in arry: "<<arr[n-2]<<endl<<"Second Minimum Element in arry: "<<arr[1]<<endl;
	cout<<"Third Maximum Element in arry: "<<arr[n-3]<<endl<<"Third Minimum Element in arry: "<<arr[2]<<endl;


}
