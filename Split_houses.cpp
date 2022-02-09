#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
char v[n];
int h=0;
for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		if( v[i]=='H') h+=1; else h=0; if(h>1) { cout<<"NO"; return 0; }

if(v[i]=='.') v[i]='B';
	}	
	cout<<"YES\n";
	for (int i = 0; i < n; ++i)
	{
		cout<<v[i];
	}
}