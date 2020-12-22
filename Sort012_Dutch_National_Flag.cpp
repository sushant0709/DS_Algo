
// Problem Link- https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin>>t;

	while(t--) {
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++) {
	        cin>>arr[i];
	    }
		int s=0;
		int e=n-1;
		int m=0;
		while(m<=e){
			if(arr[m]==0){
				swap(arr[m],arr[s]);
				m++;
				s++;
			}
			else if(arr[m]==1){
				m++;
			}
			else{
				swap(arr[m],arr[e]);
				e--;
			}
		} 		  
	}
	
    return 0;
}