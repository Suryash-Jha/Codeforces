//Question Link: https://codeforces.com/contest/230/problem/B

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


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
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; //*find_by_order(val);   order_of_key(val);

bool isprime(int n){
  if(n<=1) return 0;
for(int i=2; i*i<=n; i++){
  if(n%i==0) return 0;
}
return 1;
}
void solution() {
   int n;
   cin>>n;
   float val= sqrt(n);
   if(val== (int)val){
      if(isprime((int)val)){
          cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
   }
   else{
    cout<<"NO"<<endl;
   }
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    vi v;
    for(int i=2; i<=1000000; i++){
       if(isprime(i)) v.pb(i*i);
    }
    w(t)
    {
  int n;
   cin>>n;
   // float val= sqrt(n);
   if(binary_search(v.begin(), v.end(), n)){
 
          cout<<"YES"<<endl;
      
   }
   else{
    cout<<"NO"<<endl;
   }
    }
   
    return 0;
}