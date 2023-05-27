#include "bits/stdc++.h"
using namespace std;
#define int long long


int32_t main(){
	int t;cin>>t;
	set<int>s;
	while(t--){
		int a,b;cin>>a>>b;
		if(a==1)
			s.insert(b);
		
		else if(a==2&& s.count(b)!=0)
			s.erase(b);
		
		else if(a==3&& s.count(b)!=0)
			cout<<"Yes\n";
		
		else if(a==3&& s.count(b)==0)
			cout<<"No\n";
		
	}
}