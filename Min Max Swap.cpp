#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n,a1[1000000],a2[1000000],j1,j2,l;
cin>>t;
while(t--){
	l=INT_MIN;
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a1[i];
		if(a1[i]>l)
			l=a1[i];
		j1=i;
	}
	l=INT_MIN;
	for(int i=0;i<n;++i){
		cin>>a2[i];
		if(a2[i]>l)
			l=a2[i];
		j2=i;
	}
	int p1=*max_element(a1,a1+n);

	int p2=*max_element(a2,a2+n);
	if(a1>a2)
	{
		for(int i=0;i<n;++i){
			if(a1[i]<a2[i]){
				int temp=a1[i];
				a1[i]=a2[i];
				a2[i]=temp;
			}
		}
		cout<<(*max_element(a1,a1+n)*(*max_element(a2,a2+n)))<<endl;
	}
	else if(p1>p2){
		for(int i=0;i<n;++i){
			if(a1[i]>a2[i]){
				int temp=a2[i];
				a2[i]=a1[i];
				a1[i]=temp;
			}
		}

		cout<<(*max_element(a1,a1+n)*(*max_element(a2,a2+n)))<<endl;
	}
	else if(p1==p2){
		if(j1==j2)cout<<p1*p1<<endl;
		if(j1!=j2)
		{
			for(int i=0;i<n;++i){
				if(a1[i]>a2[i]){
					int temp=a2[i];
					a2[i]=a1[i];
					a1[i]=temp;
				}
				
		cout<<(*max_element(a1,a1+n)*(*max_element(a2,a2+n)))<<endl;
			}
		}
	}
}	
}