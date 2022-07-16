#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int n;    
    cin>>n;
    for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
    } 
    int y;
    cin>>y;
    for(int i=0;i<y;i++){
            int x;
            cin>>x;
            auto it=lower_bound(v.begin(),v.end(),x);
            if(!it=0){
                auto it=lower_bound(v.begin(),v.end(),x);
                int ind=it-v.begin();        
                cout<<"Yes"<<" "<<ind<<endl;       
            }
            else{
                auto it=lower_bound(v.begin(),v.end(),x);
                int ind=it-v.begin();        
                cout<<"No"<<" "<<ind<<endl;
            }
    }
    return 0;
}
