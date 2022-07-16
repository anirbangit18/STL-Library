#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll n;
	vector<int> v(n);
	cout<<"Enter the number of element to sort: \n";
	cin>>n;
	cout<<"Enter the element: \n";
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	cout<<"Before sorting the element is : \n";
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	cout<<"After sorting the element is : \n";
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
	return 0;
}