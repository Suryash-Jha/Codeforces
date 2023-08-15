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
int maxFind(int n, int a, int b, int c, int cou, vector<int> &dp){
	if(n==0) {return cou;}
	if(n<0) return INT_MIN;
	if(dp[n]!= -1 ) return dp[n];
	int maxm= INT_MIN;
	maxm= max(maxm, maxFind(n-a, a, b, c, cou+1, dp));
	maxm= max(maxm, maxFind(n-b, a, b, c, cou+1, dp));
	maxm= max(maxm, maxFind(n-c, a, b, c, cou+1, dp));
	return dp[n]= maxm;

}

void solution() {
   int n, a, b, c;
   cin>>n>>a>>b>>c;
   vector<int> v;
   v.push_back(a);
   v.push_back(b);
   v.push_back(c);
   sort(v.begin(), v.end());

   vector<int> dp(n+1, -1);
   int val = maxFind(n, v[0], v[1], v[2], 0, dp);
	cout<<val<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}