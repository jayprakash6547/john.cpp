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


void jay(){
    int a,b;cin>>a>>b;
    if(a>b)
    	swap(a,b);
    if(a%2!=0)
    	cout<<"Akshat\n";
    else 
    	cout<<"Malvika\n";
}
signed main(){
// int t;cin>>t;
// while(t--)
	jay();
}