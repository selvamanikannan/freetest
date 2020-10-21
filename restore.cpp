#include<bits/stdc++.h>
using namespace std;
using ll=long long;


void print(int a){
	if(a!=0) cout<<a<<" ";
}

int main(){
	ll a,b,c,d;
	ll e=-1;
	cin>>a;
	if(a>e) e=a;
	cin>>b;
	if(b>e) e=b;
	cin>>c;
	if(c>e) e=c;
	cin>>d;
	if(d>e) e=d;
	// ll e=max(a,b,c,d);
	ll m,n,o,p;
	print(e-a);
	print(e-b);
	print(e-c);
	print(e-d);
	
}