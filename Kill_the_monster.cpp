//Question Link: https://codeforces.com/contest/1633/problem/C

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
   int hc, dc;
   int hm, dm;
   int k, w, a;
   bool b=0;

   cin>>hc>>dc>>hm>>dm>>k>>w>>a;

   fo(i, k+1){
    int temp_hc= hc+ a*i;
    int temp_dc= dc+ w*(k-i);
    int hits_mons= (hm+ temp_dc -1)/temp_dc;
    int hits_char= (temp_hc +dm -1)/dm;
    // cout<<hits_char<<" "<<hits_mons<<endl;
    if(hits_mons<=hits_char){
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
   
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}