#include<bits/stdc++.h>


using namespace std;
/*
namespace ani{
	int val=50;
	int getVal(){
		return val*10;
	}
}
*/
struct node{
	string str;
	int num;
	double doub;
	char x;	
	node(string str_,int num_,double doub_,char x_){
		str=str_;
		num=num_;
		doub=doub_;
		x=x_;
	}
};

int main()
{
	/*
	int val=50;
	double val=50.0;
	cout<<val<<endl;

	cout<<ani::getVal()<<endl;	
	*/
	
	//Wrong way defining
	
	/*
	node ani;
	ani.str="Anirban";
	ani.num=32;
	ani.doub=23.03;
	ani.x='A';
	*/
	
	node *ani=new node("Anirban",32,23.0,'A');
	//defining style of 100 size array
	
	array<int,100>arr;
	
	//defining 3 size array
	array<int,3>arr;
	
	//defining 5 size array
	array<int,5> arr={1,5,6} //->{1,5,6,0,0}
	
	array<int,6> arr;
	arr.fill(10); //->{10,10,10,10,10,10}
	
	arr.at(index); //->arr.at(0);
	
	for(int i=0;i<n;i){
		cout<<arr.at(i)<<" ";
	}
	
	//iterator
	//begin(),end(),rbegin(),rend() //-> reverse begin() reverse end()
	
	// one point to print the array usning pointer
	array<int,5> arr={1,2,3,4,5};
	for(auto it:arr.begin();it!=arr.end();it++){
		cout<<*it<<" ";//				
	}
	
	for(auto it:arr.rbegin();it>arr.rend();it++){
		cout<<*it<<" ";				
	}
	
	for(auto it=arr.end()-1;it>=arr.begin();it--){
		cout<<*it<<" ";//reverse order				
	}	
	
	for(auto it: arr){
		cout<<it<<" ";
	}

	string s="xhegcwe";
	for(auto c:s){
		cout<<c<<" ";
	}
	
	//size
	cout<<arr.size();
	
	//front
	cout<<arr.front();
	//alternative
	cout<<arr.at(0);
	
	//back
	cout<<arr.back();
	//alternative
	cout<<arr.at(arr.size()-1);
	
	
	
}