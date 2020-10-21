#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int l;
		ll a;
		cin>>l;
		int ans=0;

		int arr[3];
		for (int i = 0; i < 3; ++i)
			arr[i]=0;

		for(int j=0;j<l;j++){
			cin>>a;
			arr[a%3]++;	
		}
		int val=min(arr[1],arr[2]);
			ans=arr[0]+val;
			arr[1]-=val;
			arr[2]-=val;
			cout<<ans+(arr[1]/3)+(arr[2]/3)<<endl;

	}
}