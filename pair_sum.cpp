#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int a[N];
unordered_map<int,int> mp;
bool presentOrNot(int elm){
    if (mp[elm])

    {

        return true;

    }else{

        return false;

    }

}

 

int main(){

    int n,k;

    cin>>n>>k;

    int num[n];

    int flag=0;

 

    for (int i = 0; i < n; i++)

    {

        int x;

        cin>>x;

        num[i] = x;

        mp[x]++;

        a[x] = k-x;

    }


 

    for (int i = 0; i < n; i++)

    {

        if (a[num[i]] == num[i] && mp[a[num[i]]]!=2)

        {

            break;

        }

        if (presentOrNot(a[num[i]]))

        {

            flag=1;

            break;

        }

    }

    if (flag==1)

    {

        cout<<"YES";

    }else{

        cout<<"NO";

    }

   

}