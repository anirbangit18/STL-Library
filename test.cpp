// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// #include <algorithm>


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        vector<int> ans(n);
        int i=0;
        int start=1;
        int second=0;
        sort(arr.begin(),arr.end());
        while(i<n){
        	if(start<n){
				ans[i++]=arr[start];
			}
        	if(second<n){
				ans[i++]=arr[second];
			}
        	
        	start +=2;// 1 3 5
        	second +=2;//0 2 4
		}
		        
        for(auto it: ans){
        	cout<<it<< " ";
		}
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        vector<int> a(n); //declare vector of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;
        ob.convertToWave(n, a);
    }
}  // } Driver Code Ends