// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    
	   // code here
	    if (arr[n - 1] >= arr[n - 2])
            return arr[n - 1];
	    for(int i=0;i<n-1;i++){
	        if(arr[i]<arr[i+1]){
	            continue;
	        }
	        
	        else{
	            return arr[i];
	            break;
	        }
	        
	        
	   // OR
	   // for(int i=0;i<n;i++){
	   //     if(arr[i]<arr[i+1]){
	   //         continue;
	   //     }
	   //     else{
	   //         return arr[i];
	   //         break;
	   //     }
	        
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
