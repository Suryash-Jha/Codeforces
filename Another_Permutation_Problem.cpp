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

int calc(vector<int> &v){
	int ans=0, maxm= INT_MIN;
	for(int i=0; i<v.size(); i++){
		// cout<<v[i]<<" ";
		ans+= v[i]*(i+1);
		maxm= max(v[i]*(i+1), maxm);
	}
	return ans- maxm;

}
void solution() {
   int n;
   cin>>n;
   vi temp, v;
   int maxm= INT_MIN;
   fo(i, n){
   	temp.push_back(i+1);
   }
   for(int i=0; i<n; i++){
   	v= temp;
   	reverse(v.begin()+i, v.end());
   	maxm= max(calc(v), maxm);
   	// cout<<endl;
   }
   cout<<maxm<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}