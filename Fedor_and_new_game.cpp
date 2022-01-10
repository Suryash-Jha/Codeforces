//Question Link: https://codeforces.com/contest/467/problem/B

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;


// #define int long long
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
int XOR(int x, int y) { return (x + y - (2 * (x & y))); }
int solve(int A, int B)
{
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if (((A >> i) & 1) != ((B >> i) & 1)) {
            count++;
        }
    }
 
    return count;
}
void solution() {
   int n, m, k, ans=0;
   cin>>n>>m>>k;
   vp(i, v, m+1);
   fo(i, m){
    if(solve(v[i], v[m])<= k)
      ans++;
    // cout/<<endl;
   }
   cout<<ans;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}