#include<bits/stdc++.h>
using namespace  std;
int main()
{
	//bitset //only store 1 or 0
	bitset<5> bt; //11111   10011
	//all
	//true if all bit is set
	//false if any bit is zero
	
	cout<<bt.all();
	
	//any
	//true if any bit one
	//false if all bit zero
	cout<<bt.any();
	
	//count
	//count all 1
	cout<<bt.count();
	
	//flip
	bt.flip(2); // flip the second index and change this vice varsa
	
	//none
	//if none is set true or false
	//bt ->100000
	cout<<bt.none(); //false
	
	//bt ->000000
	cout<<bt.none(); //true
	
	//set
	bt.set(); //111111
	
	bt.set(2); //set the 2nd index 1

	bt.set(2,0); //set the 2nd index 0	
	//reset
	bt.reset(); //turn all index is 0
	
	bt.reset(2); //turn the 2nd index 0
	
	//size
	cout<<bt.size(); //print 5
	
	//test
	cout<<bt.test(1); //check if the bit is set or not at indesx 1
	
	
	
	
	
	
	
		
}