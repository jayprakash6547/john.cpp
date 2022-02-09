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
#define sz(x) (int)x.size()
// #define loop(n)  for(ll i = 0; i < (n); ++i)

string to_upper(string &a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string &a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
int gcd(int a,int b){if(b==0)return a;return gcd(b,a%b);}
int lcm(int a,int b){return (a/gcd(a,b))*b;}
void printarr(int arr[],int n){for(int i=0;i<n;i++)cout<<arr[i]<<" ";}


void jay(){
	map<int,int>m1;
    set<int>s1;
    bool lg=0;
    for(ll i=0;i<6;i++){
    	int x;
        cin >> x;
        s1.insert(x);
        if (++m1[x] == 4)   s1.erase(x), lg = 1;
    }
    if(lg){
    	if(sz(s1)==1)cout<<"Elephant";
    	else cout<<"Bear";
    }
    else cout<<"Alien";
}
int main(){
int t=1;
// cin>>t;
while(t--)
	jay();
}