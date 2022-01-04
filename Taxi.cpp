// Question Link: https://codeforces.com/problemset/problem/158/B



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
   map<int, int> m;
   fo(i, n){
    int x;
    cin>>x;
    m[x]++;
   }
  int ans=0;
  ans+= m[4];
  ans+=m[3];
 ans+= (m[2]/2);

m[1]-=m[3];
if(m[2]%2==1){
  m[1]-=2;
  ans++;
}
if(m[1]>0){
  ans+= (m[1]+3)/4;

}
cout<<ans<<endl;
 
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}