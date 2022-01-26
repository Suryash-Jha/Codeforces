//Question Link: https://codeforces.com/contest/577/problem/A

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


// A Better (than Naive) Solution to find all divisiors
#include <iostream>
#include <math.h>
using namespace std;
 

void solution() {
   int n, k, ans=0;
   cin>>n>>k;
   for(int i=1; i<=sqrt(k); i++){
   	int v= k/i;
   	if((v*i)== k && i<=n && v<=n){
   		ans++;


if(i!= v){
   		 	ans++;
   		 }
		}
		 
	}
   cout<<ans;

}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // wn/i(t)
    {
        solution();
    }
   
    return 0;
}