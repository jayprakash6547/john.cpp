#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define pp pop_back
#define umap unordered_map<int,int>
#define omap map<int,int>
#define pi pair<int,int>
#define mp make_pair


string to_upper(string &a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string &a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}
int lcm(int a,int b){return (a/gcd(a,b))*b;}
void printarr(int arr[],int n){for(int i=0;i<n;i++)cout<<arr[i]<<" ";}

int main(){
	ll n;cin>>n;
	vector<vector<string>>like(n),dislike(n);
	for(ll i=0;i<n;i++){
		ll cnt;cin>>cnt;
		while(cnt--){
			string now;cin>>now;
			like[i].pb(now);
		}
		cin>>cnt;
		while(cnt--){
			string now;cin>>now;
			dislike[i].pb(now);
		}
	}
	set<string>disliked;
	for(auto &v:dislike){
		for(auto &x:v){
			disliked.insert(x);
		}
	}
	set<string>output;
	for(auto &v:like){
		for(auto &x:v){
			if(disliked.find(x)==disliked.end()){
				output.insert(x);
			}
		}
	}
	cout<<output.size()<<" ";
	for(auto &ing:output){
		cout<<ing<<" ";
	}
	cout<<"\n";
}