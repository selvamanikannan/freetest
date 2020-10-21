#ifndef DEBUG
  #pragma GCC optimize ("Ofast")
#endif
#include <bits/stdc++.h>

//Syntax Sugars
using namespace std;
using f64 = double;
using i8=char;using i16=short;using i32=int;using i64=long long;
using u8=unsigned char;using u16=unsigned short;using u32=unsigned;using u64=unsigned long long;
const f64 pi=acos(-1);
const f64 eps=1e-12;
const i32 prime=i32(2e9 + 11);
i32 mod=i32(1e9 + 7);
template<typename T=int> T inf() { return numeric_limits<T>::max() / 2; }
#define forh(var, s, e) for(int var=s; int(s)<=var && var<int(e); ++var)//for: half-opened range
#define forhi(var, s, e) for(int var=e-1; int(s)<=var && var<int(e); --var)//inversion
#define forho(var, s, e) int var=s; for(; int(s)<=var && var<int(e); ++var)//out declaration
#define forhoi(var, s, e) int var=e-1; for(; int(s)<=var && var<int(e); --var)
#define forc(var, s, e) for(int var=s; int(s)<=var && var<=int(e); ++var)//for: closed range
#define forci(var, s, e) for(int var=e; int(s)<=var && var<=int(e); --var)//inversion
#define forco(var, s, e) int var=s; for(; int(s)<=var && var<=int(e); ++var)//out declaration
#define forcoi(var, s, e) int var=e; for(; int(s)<=var && var<=int(e); --var)
#define rep(x) forh(repi,0,x)
#define all(x) x.begin(),x.end()

//Extensions: gp_hash_table, XSet
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

//Extensions: rope
#include <ext/rope>
using namespace __gnu_cxx;

//Do not use it when solving interactive problems!!!
#define endl '\n'

signed main(){
  ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  cout<<fixed<<setprecision(11);
  srand((u32)time(0));

  int n;
  cin>>n;
  vector<int> a;
  forh(i,0,n){
    int x;
    cin>>x;
    a.push_back(x);
  }
  sort(a.begin(), a.end());
  a.erase(unique(all(a)), a.end());
  if(a.size()>3)
    cout<<-1<<endl;
  else{
    if(a.size()==1)
      {    
        cout<<0<<endl;
    } 
       else if(a.size()==2){
      if((a[1]-a[0])%2)
        cout<<a[1]-a[0]<<endl;
      else
        cout<<(a[1]-a[0])/2<<endl;
    }
    else{
      if(a[2]-a[1]!=a[1]-a[0])
        cout<<-1<<endl;
      else
        cout<<a[2]-a[1]<<endl;
    }
  }

  return 0;
}