//Question Link: https://codeforces.com/problemset/problem/1324/B

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

void solution() {
   int n;
   cin>>n;
   bool b=0;
   vi v;
   map<int, int> m;
   fo(i, n){
    int x;
    cin>>x;
    v.push_back(x);
    m[x]++;
   }
   for(auto it:m){
    if(it.second>=3){
      b=1;
      break;
    }
    if(it.second==2){
      int ind1, ind2;
      fo(i, n){
        if(v[i]== it.first)
        {
          ind1= i;
          break;
        }
      }
      for(int i=n-1; i>=0; i--){
        if(v[i]== it.first)
        {
          ind2= i;
          break;
        }
      }
      if(abs(ind2-ind1)> 1)
      {
        b=1;
        break;
      }
      // reverse(v.begin(), v.end());

    }
   }
   if(b){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

 }

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}