#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int c1,c2;
		cin>>c1>>c2;
		int n;cin>>n;
		int cost=0;
		int a[n][2];
		for(int i=0;i<n;i++){
			for(int j=0;j<2;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			if(a[i][0]==1)
				cost+=1*c1;

			if(a[i][1]==1)
				cost+=1*c2;
}
			int cost2=0;
			for(int i=0;i<n;i++){
			if(a[i][0]==1)
				cost2+=1*c2;

			if(a[i][1]==1)
				cost2+=1*c1;
			
		}
		cout<<min(cost,cost2)<<endl;
	}
	}
