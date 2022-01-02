//Question Link: https://codeforces.com/problemset/problem/459/B

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
   int n, maxc=0, minc=0;
   cin>>n;
   vp(i, v, n);
   // cout<<(n*(n+1))/2;
   int maxm= *max_element(v.begin(), v.end());
   int minm= *min_element(v.begin(), v.end());
   fo(i, n){
    if(v[i]== maxm){
      maxc++;
    }
    else if(v[i]== minm){
       minc++;
    }
   }

    if(minc==0){
      if(maxc==2 ){
   cout<<maxm-minm<<" "<<1<<endl;

      }
      else{
        n--;
   cout<<maxm-minm<<" "<<(n*(n+1))/2<<endl;

      }
   // cout<<maxm-minm<<" "<<pow(maxm, maxc)<<endl;

    }
else{
   cout<<maxm-minm<<" "<<maxc*minc<<endl;

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