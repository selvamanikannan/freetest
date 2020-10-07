#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll t;
	cin>>t;
	while(t--){
		int n,get,ct=0;
		cin>>n;
		map<int,int> m;

		for(int i=0;i<n;i++){
			cin>>get;
			m[get]++;
		}
		int back=1;

		while(back){
			for(auto it=m.rbegin();it!=m.rend();it++){
				int temp=it->first;
				if(it->first%2==0 and it->second>=1){
					m[it->first]=-1;
					if(m[temp/2]==0)
						m[temp/2]++;
					ct+=1;
				}
				else
					m[temp]=-1;
			}
			for(auto y : m){
				if(y.second!=-1)break;
				back=0;
			}
		}
		cout<<ct<<endl;
	}
}