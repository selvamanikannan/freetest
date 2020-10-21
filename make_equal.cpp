#include<bits/stdc++.h>
using namespace std;

#define PB push_back  
#define MP make_pair  
#define SZ(v) ((int)(v).size())  
#define FOR(i,a,b) for(int i=(a);i<(b);++i)  
#define REP(i,n) FOR(i,0,n)  
#define FORE(i,a,b) for(int i=(a);i<=(b);++i)  
#define REPE(i,n) FORE(i,0,n)  
#define FORSZ(i,a,v) FOR(i,a,SZ(v))  
#define REPSZ(i,v) REP(i,SZ(v))  
typedef long long ll;  
int gcd(int a,int b) { return b==0?a:gcd(b,a%b); }


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int l;
	cin>>l;
	int arr[l];
	REPE(i,l-1){ cin>>arr[i]; }

	sort(arr,arr+l);
		// REPE(i,l-1){ cout<<arr[i]; }

	int mid=ceil(arr[l-1]-arr[0])/2;
	int ans=arr[0]+mid;
	int flag=0;

	REPE(i,l-1){
		if(arr[i]==ans)
			continue;
		else if(arr[i]-mid==ans || arr[i]+mid==ans)
			continue;
		else
			flag=1;
			break;
	}

	(flag==0) ? cout<<mid<<"\n" : cout<<"-1\n" ;
}