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
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    ll ran=max(a,max(b,c));
    float arr[ran+1]={0};
    for(ll i=1;i<=ran;i++)
        arr[i]=(float)n/i;
    
    // if(n == a or b or c)
    // 	ans=max(ans,1);
    // if(a+b==n)
    // 	ans=max(ans,2);
    // if(b+c==n)
    // 	ans=max(ans,2);
    // if(a+c==n)
    for(ll i=0;i<ran+1;i++)
        cout<<arr[i]<<endl;
    // cout<<max(arr[a],max(arr[b],arr[c]))<<endl;
}