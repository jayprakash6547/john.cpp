#include<bits/stdc++.h>
using namespace std;
// is ko main BFS se bhi kr sakta tha
int main(){
int t;cin>>t;
while(t--){
	int a,b;cin>>a>>b;
	int ans=b-a;

	for(int i=0;i<(b-a);i++){
		if(((a+i)|b)==b){
			ans=min(ans,i+1);
		break;
		}
		if((a|(b+i))==(b+i)){
			ans=min(ans,i+1);
		break;
		}
	}
	cout<<ans<<"\n";
}	
}