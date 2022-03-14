//Question Link: https://codeforces.com/problemset/problem/1419/D1

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
   vp(i, v, n);
   sort(v.begin(), v.end());
   if(n<= 2) 
    {
      cout<<0<<" ";
   for(auto it: v){
    cout<<it<<" ";
   }
   cout<<endl;
 }
   else if(n%2!=0){
    cout<<n/2<<endl;
    fo(i, ceil(n/2.0)-1){
      cout<<v[i+(n/2)]<<" "<<v[i]<<" ";
    }
    cout<<v[ceil(n/2.0)-1 +(n/2)]<<endl;
   }
   else{
    
   cout<<n/2 -1<<endl;
    fo(i, ceil(n/2.0)){
      cout<<v[i+(n/2)]<<" "<<v[i]<<" ";
    }
    cout<<endl;
   }

}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}