#include<bits/stdc++.h>
using namespace std;
int main()
{
	array<int,100> arr;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	} 
	int x;
	cin>>x;
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			cout<<i<<endl;
		}
	}
}