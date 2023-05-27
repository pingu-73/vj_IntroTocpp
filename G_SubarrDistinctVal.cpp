#include "bits/stdc++.h"
using namespace std;
#define int long long

int solve(vector<int>v,int n,int k) {
    int ct=0;int x=0;
    
    unordered_map<int, int>m;
    for (int i = 0; i < n; i++) {
        m[v[i]]++;
        while (m.size() > k) {
            m[v[x]]--;
            
            if (m[v[x]] == 0) 
                m.erase(v[x]);
           
            x++;
        }
        ct+=i-x+1;
    }
    return ct;
}

int32_t main(){
	int n,k; cin>>n>>k;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		cin>>v[i];
	cout<<solve(v,n,k)<<"\n";		
}