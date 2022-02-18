//Question Link: https://codeforces.com/contest/1342/problem/A

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

   int a, b, x, y;
   cin>>x>>y>>a>>b;
   if(x==0 || y==0){
     cout<<(a*x)+(a*y)<<endl;
   }
   else{
    int val1= (a*(x-1)) + (a*(y-1))+ b;
    int val2= (a*abs(y-x))+ b*min(x, y);
    int val3= (a*abs(y-x))+ b*max(x, y);
    int val4= (a*x)+(a*y);
    // cout<<val1<<" "<<val2<<" "<<val3<<" "<<val4<<endl;
    cout<<min(val1, min(val3, min(val2, val4)))<<endl;
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