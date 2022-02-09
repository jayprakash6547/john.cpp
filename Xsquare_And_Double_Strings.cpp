#include<bits/stdc++.h>
using namespace std;
int ct[32];

int main(){
	int t ;cin>>t;
	string s;
	while(t--){
		cin>>s;
		memset(ct,0,sizeof(ct));
		for(int i=0;i<s.size();++i)
			ct[s[i]-'a']++;
		for (int i = 0; i < 26; ++i)
		{
			if(ct[i]>=2){
				cout<<"Yes\n";
				goto p1;
			}
		}
		cout<<"No\n";
		p1: { }
	}
}