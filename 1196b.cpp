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


void swap(int *a,int *b){
	int c= *b;
	*b=*a;
	*a=c;
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll len;
    cin>>len;
    while(len--){
    	ll n,k,data;
    	cin>>n>>k;
    	std::vector<ll> v;
    	std::vector<ll> odd;
    	std::vector<ll> even;
    	for(ll i=0;i<n;i++){
    		cin>>data;
    		if(data%2==0)
    			even.push_back(i);
    		else
    			odd.push_back(i);
    		v.push_back(data);
    	}
    	if(odd.size()>=k){
    		cout<<"YES\n";
    		for (int i = 0; i<k-1; ++i)
    		{
    			cout<<odd[i]+1<<" ";
    		}
    		// for(ll i=0;i<odd.size();i++)
    		// 	cout<<odd[i]+1<<" ";
    		cout<<n<<"\n";
    	}
    	else
    		cout<<"NO\n";
    }
}