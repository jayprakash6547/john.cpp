#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,z;cin>>n>>m>>z;
set<int>s;
for(int i=n;i<=z;i+=n){
	s.insert(i);
}	
int ans=0;
for(int i=m;i<=z;i+=m){
	ans+=s.count(i);
	s.insert(i);
}
cout<<ans<<endl;
}