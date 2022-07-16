//vector
#include<bits/stdc++.h>
using namespace std;
//maximum size of array in global data type is 10^7
//int arr[10000000];

//maximum size of array in global data type of bool is 10^8
//bool arr[100000000];

int main()
{
	//maximum size  of array 10^6
	//int arr[1000000];
	
	vector<int> vec;

	//push_back()
	vec.push_back(0);
	vec.push_back(2);
	cout<<vec.size()<<endl;
	
	//pop_back();
	vec.pop_back();
	cout<<vec.size()<<endl;
	
	//clear()
	vec.clear(); //->erase all the element at once
	cout<<vec.size()<<endl;
	
	//declaration
	vector<int> vec1(4,0); //->{0,0,0,0}
	
	vector <int> vec2(4,10);
	for(auto it: vec1){
		cout<<it<<" ";
	}
	cout<<endl;
	
	for(auto it: vec2){
		cout<<it<<" ";
	}
	
	//copy entire vector 2 into vector 3 
	vector<int> vec3(vec2);
	
	for(auto it: vec3){
		cout<<it<<" ";
	}
	
	vector <int> vec4;
	vec4.push_back(1); //vec4.emplace_back(1); //emplace_back is like push_back but this is first compare to push back
	vec4.push_back(3);
	vec4.push_back(2);
	vec4.push_back(4);
	vec4.push_back(6);
	vec4.push_back(5);
	
	cout<<endl;
	
	for(auto it: vec4){
		cout<<it<<" ";
	}
	
	cout<<endl;
	
	vector <int> vec5(vec4.begin(),vec4.begin()+2);
	
	for(auto it: vec5){
		cout<<it<<" ";	
	}
	
	//lower bound,upper bound
	
	//swap swap(v1,v2)
	//begin(),end(),rbegin(),rend()
	
	//to define 2d vectors
	cout<<endl;
	vector <vector<int>> vec6;
	
	vector <int> vec7;
	
	vec7.push_back(1);
	vec7.push_back(3);
	vec7.push_back(2);
	
	vector <int> vec8;
	
	vec8.push_back(4);
	vec8.push_back(6);
	vec8.push_back(5);
	
	vector <int> vec9;
	
	vec9.push_back(7);
	vec9.push_back(9);
	vec9.push_back(8);
	
	vec6.push_back(vec7);
	vec6.push_back(vec8);
	vec6.push_back(vec9);
	
	for(auto vctr:vec6){
		for(auto it:vctr)
			cout<<it<<" ";
		cout<<endl;	
	}
	cout<<endl;
	for(int i=0;i<vec6.size();i++){
		for(int j=0;j<vec6[i].size();j++){
			cout<<vec6[i][j]<<" ";
		}
		cout<<endl;
	}
	
	// define 10*20 size of matrix
	
	vector<vector<int>>vec10(10,vector<int>(20,0));
	
	vec10.push_back(vector<int>(30,0));
	//define 3d vector
	//int arr[10][20][30]
//	vector<vector<vector<int>>> vec11(10,vec10(20,vector<vector<int>(30,0))
	
}
