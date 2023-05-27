#include "bits/stdc++.h"
using namespace std;
#define int long long

int32_t main(){
	int t;cin>>t;
	map<string,int>m;
	while(t--){
		int a,y;
		string x;
		cin>>a;
		
		if(a==1){
			cin>>x>>y;
			m[x]+= y;
		}
		else if(a==2){
			cin>>x;
			m.erase(x);
		}
		else if(a==3){
			cin>>x;
			cout<<m[x]<<"\n";
		}
	}
}