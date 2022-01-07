//Question link: https://codeforces.com/contest/1352/problem/B

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
   int n, k;
   cin>>n>>k;
   bool b1=0, b2=0;
   int val1= n-(k-1);
   int val2= n-(2*(k-1));
   if(val1%2!=0 && val1>0){
    b1=1;
    cout<<"YES"<<endl;
    fo(i, k-1){
      cout<<1<<" ";
    }
    cout<<val1<<endl;
   }
   else if(val2%2==0 && val2>0){
    b2=1;
    cout<<"YES"<<endl;
    fo(i, k-1){
      cout<<2<<" ";
    }
    cout<<val2<<endl;

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