#include<bits/stdc++.h>
using namespace std;
int main()
//given n elements, tell me the number of unique of elements

{
	int arr[]={2,5,2,1,5};
	set<int> st;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		st.insert(x);
	}	
	//erase functionality
	st.erase(st.begin());//{2,5}
	st.erase(st.begin(),st.begin()+2);//{}
	st.erase(5);//direct delete
	
	//set declaration
	set<int> st={1,5,7,8};
	//complexity log(n)
	auto it=st.find(7);
	auto it=st.find(9);
	
	for(auto it=st.begin();it!=st.end){
		cout<<it<<endl;
	}
	
	
	//unorder set
	
	unorder_set<int> st1;
	st1.insert(2);
	st1.insert(3);
	st1.insert(1);
	//complexity o(1)
	
	//multiset
	multiset <int> ms;
	
	ms.insert(1);
	ms.insert(2);
	ms.insert(2);
	ms.insert(3);
	ms.insert(1); //ms.emplace(2);
	
	ms.erase(2);
	
	auto it=ms.find(2); //get the first position of 2
	
	ms.clear() //delete all set
	
	ms.erase(ms.begin(),ms.end());
	
	for(auto it: st){
		cout<<it<<endl;
	}
	
	// ms.clear means hole set
	
	// erase function are three type
	
	// st.erase(st.begin()); 
	// st.erase(st.begin(),st.begin()+2);
	// st.erase(5)
	
	//find how many time 2 occures
	
	st.count(2);
	
	// map only store unique keys
	map<string,int> mpp;
	mpp["raj"]=27;
	mpp["hima"]=31;
	mpp["sandip"]=67;
	mpp["tank"]=89;
	mpp["raj"]=29;
	
	mpp.emplace("raj",45);
	mpp.erase("raj");
	
	 // mpp.erase(st.begin()); 
	// mpp.erase(st.begin(),st.begin()+2);
	// mpp.erase("raj");
	//mpp.clear();
	
	auto it=mpp.find("raj");
	
	if(mpp.empty()){
		cout<<"Yes it is empty.";
	}
	mpp.count("raj");
	
	pair<int,int> pr;
	pr.first=0;
	pr.second=10;

	for(auto it: mpp){
		cout<<it<<endl;
	}
	
	//does not stote any order
	
	unorder_map<int,int>mpp;
	
	//pair class
	pair<int,int> pr={1,2};
	pair<pair<int,int>,int>pr={{1,2},2};
	cout<<pr.first.second<<endl;
	pair<pair<int,int>,pair<int,int>> pr={{1,2},{2,4}};
	cout<<pr.first.first;//-->1
	cout<<pr.second.second;//-->4
	
	//vector of pair
	
	vector<pair<int,int>> vec;
	set<pair<int,int>>st;
	map<pair<int,int>,int>mpp;
	
	//multi map
	
	multimap<string,int> mpp;
	mpp["raj"]=2;
	mpp["raj"]=4;  //mpp.emplace("raj",4)
    
    
    //stack and queue
    
    stack<int> st; //lifo
    //push and emplace
	//pop
    //top
    //size
    //empty
    
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(1);
    
    cout<<st.top() //print 1
    st.pop()
	cout<<st.top() //print 8
	st.pop()
	cout<<st.top() //print 6
	
	bool flag=st.empty();
	//return true is stack is true
	while(!st.empty()){
		st.pop();
	}
	
	cout<<st.size()<<endl;
	
	stack<int> st;
	if(!st.empty()){
		cout<<st.top()<<endl;
	}
	
	//queue //fifo ds
	
	//push
	//pop
	//front
	//size
	//empty
	
	queue<int> q;
	q.push(1);
	q.push(5);
	q.push(3);
	q.push(6);
	
	
    cout<<q.front() //print 1
    q.pop()
	cout<<q.front() //print 8
	q.pop()
	cout<<q.front() //print 6
    while(!q.empty()){
    	q.pop();
	}
    queue<int> q;
    for(int i=0;i<10;i++){
    	q.push(i);
	}
    //priority queue
    priority_queue<int> pq;
    pq.push(1);
	pq.push(5);
    pq.push(2);
    pq.push(6);
    
    //--> 6 5 2 1
    cout<<pq.top();
    pq.pop();
    cout<<pq.top();
    
    priority_queue<pair<int,int>> pq;
    pq.push(1,5);
	pq.push(1,6);
    pq.push(1,7);
    pq.push(1,8);
    
	//decreasing priority queue 
    priority_queue<int> pq;
    pq.push(-1);
	pq.push(-5);
    pq.push(-2);
    pq.push(-6);
	
	cout<<-1*pq.top()<<endl;
	
	 
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(1);
	pq.push(5);
    pq.push(2);
    pq.push(6);
    
    count<<pq.top()<<endl;
    
    
    //deque
    dequeue<int> dq;
    //push_front()
    //push_back()
    //pop_front()
    //pop_back()
    //begin,end,rbegin,rend
    //size
    //clear
    //empty
    //at
    
    list<int>ls;
    //push_front()
    //push_back()
    //pop_front()
    //pop_back()
    //begin,end,rbegin,rend
    //size
    //clear
    //empty
    //at
    //remove
    ls.push_front(1);
    ls.push_front(2);
    ls.push_front(3);
    ls.remove(2);
    
    int n;
    cin>>n;
    map<int,int> mpp;
    int maxi=0;
    for(int i=0;i<n;i++){
    	int x;
    	cin>> x;
    	mpp[x]++;
    	if(mpp[x]>mpp[maxi]){
    		maxi=x;
	    }
	}
	cout<< maxi<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
		
	
	
}