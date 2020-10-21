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
    ll a,b,c;
    cin>>a>>b;
    vector<ll> vec;
    int pre=0;
    int pos=0;
	for (ll i = 1; i <= a; ++i){
		cin>>c;
		if(c==0){pre=1;};
		if(c==b){pos=1;};
		vec.push_back(c);
	}
	
	sort( vec.begin(), vec.end() );
	vec.erase(unique( vec.begin(), vec.end() ), vec.end());
	long  double run=0;
	// run=max(vec[0]-a,b-vec[vec.size()-1]);
	for (ll i = 0; i < vec.size()-1; ++i){
		run=max(run,((long double)vec[i+1]-vec[i])/2);
	}
	if(pre==0){run=max(run,(long double)vec[0]-0);};
	if(pos==0){run=max(run,(long double)b-vec[vec.size()-1]);};


std::cout.precision(10);
cout<<run;
   
}	
