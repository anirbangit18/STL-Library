#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
	ll n;
	cin>>n;
	vector <ll> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end(),greater<int>());
	int i=0;
	int start=0;
	int end=n-1;
	vector <int> ans(n);
	while(i<n){
		ans[i++]=v[start++];
		ans[i++]=v[end--];
	}	
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	cout<<endl;
}