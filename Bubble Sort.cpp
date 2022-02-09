#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int arr[n];
cin>>n;
for(int i=0;i<n;i++){
	for(int j=0;j<n-1;j++){
		if(arr[j]>arr[j+1])
			swap(arr[j],arr[j+1]);
	}
}	
}