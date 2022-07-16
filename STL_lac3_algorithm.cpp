#include<bits/stdc++.h>
using namespace  std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sort(arr,arr+n);
	
	for(auto it: arr)
		cout<<it<<" ";
	
	//reverse
	cout<<endl;
	reverse(arr,arr+n);

	for(auto it: arr)
		cout<<it<<" ";
		
	cout<<endl;	
	
	//to print the maximum number in array
	int el=*max_element(arr,arr+n);
	cout<<el<<endl;
	
	//to print the minimum number in array
	int el1=*min_element(arr,arr+n);
	cout<<el1<<endl;
	
	//sum the element in the given range
	int sum=accumulate(arr,arr+n,0);
	cout<<"\n"<<sum;
	
	//count the number of 1
	
	int cnt=count(arr,arr+n,1);
	cout<<"\n"<<cnt;
	
	//print the first occurence of 2
	auto it=find(arr,arr+n,2);
	cout<<"\n"<<it;
	//vector
	vector<int> vec(5,0);
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	sort(vec.begin(),vec.end());
	
	for(auto it: vec)
		cout<<it<<" ";
	cout<<endl;
	reverse(vec.begin(),vec.end());
	
	for(auto it: vec)
		cout<<it<<" ";
	cout<<endl;
		
	//to print the maximum number in vector
	int el2=*max_element(vec.begin(),vec.end());
		cout<<el2<<endl;
	
	//to print the minimum number in vector	
	int el3=*min_element(vec.begin(),vec.end());
		cout<<el3<<endl;
		
	//sum the element in the given range
	int sum1=accumulate(vec.begin(),vec.end(),0);
	cout<<"\n"<<sum1;
	
	//count the number of 1
	
	int cnt1=count(vec.begin(),vec.end(),1);
	cout<<"\n"<<cnt1;
	
	//print the first occurence of 2
	auto it1=find(vec.begin(),vec.end(),2);
	
	
	
	//binary search
	//this stl only work on sorted array
	//arr[]={1,5,7,9,10}
	//x=8
	//false ->does not index in the array
	
	bool res=binary_search(arr,arr+n,8); 
	bool res=binary_search(vec.begin(),vec.end,8)
	//complexity log n
	
	
	//lower_bound function
	//return an iterator pointing to the fisrt
	//element which is not less than 10
	
	//arr[]->{1,5,8,10,11}
	//x-> 10 then index is 3
	//x->6 then index is 2
	
	auto it=lower_bound(arr,arr+n,x);
	int ind=it-arr;
	
	auto it=lower_bound(vec.begin(),vec.end(),x);
	int ind=it-vec.begin();
	
	//upper bound 
	//return the iterator which points to an element which
	//just greater than x
	
	auto it=upper_bound(arr,arr+n,x);
	int ind=it-arr;
	
	auto it=upper_bound(vec.begin(),v.end(),x);
	int ind=it-vec.begin();	
	
	
	if(binary_search(arr,arr+n,x)==true){
		cout<<lower_bound(arr,arr+n,x)-arr;
	}
	else
	cout<<"does not exists";
	
	int ind=upper_bound(arr,arr+n,x)-arr;
	ind-=1;
	if(arr[ind]==x){
		cout<<"last occurence: "<<ind;
	}
	else{
		cout<<"does not exist";
	}
	
	//count the element
	//lb-ub
	
	//next permutation
	//string s="abc";
	//all permutation is as follow
	//abc
	//acb
	//bac
	//bca
	//cab
	//cba
	
	bool res=next_permutation(s.begin(),s.end());
	
	bool res=next_permutation(s.begin(),s.end());
		
	string s="abc";
	sort(s.begin(),s.end());
	do{
		cout<<s<<endl;
	}while(next_permutation(s.begin(),s.end()));
	
	
	int arr[]={1,5,6};
	int n=3;
	sort(arr,arr+n);
	do{
		for(int i=0;i<n;i++)
			cout<<arr[i]<<" ";
			cout<<endl;
	}while(next_permutation(arr,arr+n));
	
	
	//previous permutation
	bool res=prev_permutation(s.begin(),s.end());
	
	//comparator
	
	
	bool comp(int el1,int el2){
		if(el1<=el2){
			return true;
		}
		return false;		
	}
	
	bool comp(pair<int,int> el1,pair<int,int> el2){
		if(el1.first<el2.first){
			return true;
		}
		if(el1.first==el2.first){
			if(el1.second>el2.second){
				return true;
			}
		}
		
		return false;		
	}	
	
	
	sort(arr,arr+n);
	//which works only if you wanna do this in descending
	sort(arr,arr+n,greater<int>);
	
	sort(arr,arr+n,greater<pair<int>>);
	
					
	

	
		
}