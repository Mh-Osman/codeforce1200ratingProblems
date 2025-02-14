 
#include <bits/stdc++.h>
 
#define ll long long
#define ull unsigned long long
#define dd double
#define scl(n) scanf("%lld", &n)
#define scd(n) scanf("%lf", &n)
#define pb push_back
#define FOR(i, n) for (ll i = 1; i <= n; i++)
#define LOOP(i, n) for (ll i = 0; i < n; i++)
#define FOOR(i, a, b) for (ll i = a; i <= b; i++)
#define LOP(i, a, b) for (ll i = a; i < b; i++)
#define sorted(s) sort(s.begin(), s.end())
#define MAXN 100004
 
using namespace std;
 
int main() {
 
 
 int t;
 cin>>t;

 while(t--){

 ll n;
 cin>>n;
 vector<ll> a(n);
ll ans=0;
 for(int i=0;i<n;i++){

  cin>>a[i];
  ans+=a[i];

 }


 while(n>1){
 vector<ll> v;
 ll temp=0;
 for(int i=0;i<n-1;i++){

    v.push_back(a[i+1] - a[i]);
    temp+= (a[i+1] - a[i]);
    
 }
a=v;
 ans = max(ans , abs(temp));
 v.clear();
 n-=1;

 }


 cout<<ans<<endl;
    
}
return 0;
}