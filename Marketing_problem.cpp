#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main()
{
	ll n,d;
	cin>>n>>d;
	vector <ll> v(n);
	ll sum=0;
	for(int i=0;i<n;i++){
		cin>>v[i];
		sum+=v[i];
	}
	ll ans=d/sum;
	d-=sum*ans;
	ans=ans*n;
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		if(d-v[i]>=0){
			ans++;
			d=d-v[i];
		}
	}
	cout<<ans<<endl;
}