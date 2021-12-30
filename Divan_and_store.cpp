//Question Link: https://codeforces.com/contest/1614/problem/A

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define fo(i, n) for(int i=0;i<n;i++)
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mod 1e9 +7
#define w(x) int x; cin>>x; while(x--)
#define endl "\n"
#define vp(i, a, n) vi a; fo(i, n){int x; cin>>x; a.pb(x);}
#define ap(i, a, n) fo(i, n){cin>>a[i];}

typedef vector<int> vi;


void solution() {
   int n, l, r, k, count=0;
   cin>>n>>l>>r>>k;
   // vp(i, v, n);
   vi v;

   fo(i, n){
    int x;
    cin>>x;
    if(x<=r && x>=l)
    {
      v.pb(x);
    }    
   }
   sort(v.begin(), v.end());
fo(i, v.size()){
  if(k>=v[i]){
    k-= v[i];
    count++;
  }
}
cout<<count<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}