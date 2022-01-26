//Question Link: https://codeforces.com/contest/1490/problem/C

//Stored cubes of first 10^4 numbers and then tried to find the number and complement of number in map

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



int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    map<int64_t, int64_t> m;
    for(int i=1; i<=10100; i++){
    // { int x= i*i*i;
    	m[i*i*i]= i;
    }
    w(t)
    {

    	int64_t n;
    	cin>>n;
    	bool b=0;
        for(auto it: m){
        	int64_t num= it.first;
        	int64_t rem= n- num;
        	if(m.find(rem)!= m.end())
        	{
        		b=1;
        		break;
        	}
        }
        if(b){
        	cout<<"YES"<<endl;
        }
        else{
        	cout<<"NO"<<endl;
        }
        // solution();
    }
   
    return 0;
}