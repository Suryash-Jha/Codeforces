//Question Link: https://codeforces.com/problemset/problem/1040/A

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
   int n, a, b;
   cin>>n>>a>>b;
   int ans=0;
   int minm= min(a, b);
   vp(i, v, n);
   if(n%2==0){
    fo(i, n/2){
    if(v[i]==2 && v[n-i-1]==0){
       ans+= a;
       v[i]= 0;
    }
    else if(v[i]==2 && v[n-i-1]==1){
       ans+= b;
       v[i]= 1;
    }
    else if(v[i]==2 && v[n-i-1]==2){
      ans+= 2*minm;
    }
    else if(v[i]==0 && v[n-i-1]==2){
      ans+= a;
      v[n-i-1]= 0;
    }
    else if(v[i]==1 && v[n-i-1]==2){
      ans+= b;
       v[n-i-1]= 1;
    }

    }
    vi temp=v;
    reverse(temp.begin(), temp.end());
    fo(i, n){
      if(v[i]!=temp[i]) {
        cout<<"-1"<<endl;
        return;
      }
    }
    cout<<ans<<endl;
   }
   else{
        fo(i, (n/2)){
    if(v[i]==2 && v[n-i-1]==0){
       ans+= a;
       v[i]= 0;
    }
    else if(v[i]==2 && v[n-i-1]==1){
       ans+= b;
       v[i]= 1;
    }
    else if(v[i]==2 && v[n-i-1]==2){
      ans+= 2*minm;
    }
    else if(v[i]==0 && v[n-i-1]==2){
      ans+= a;
      v[n-i-1]= 0;
    }
    else if(v[i]==1 && v[n-i-1]==2){
      ans+= b;
       v[n-i-1]= 1;
    }

    }
    if(v[n/2]==2) ans+= minm;
    vi temp=v;
    reverse(temp.begin(), temp.end());
    // fo(i, n){
    //   cout<<v[i]<<" ";
    // }
    // cout<<endl;
    fo(i, n){
      if(v[i]!=temp[i]) {
        cout<<"-1"<<endl;
        return;
      }
    }
    cout<<ans<<endl;
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