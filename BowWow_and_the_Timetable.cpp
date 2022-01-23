//Question Link: https://codeforces.com/contest/1204/problem/A

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
   string s;
   cin>>s;

   int val= s.length();
   if(s[0]=='0' && val==1){
    cout<<0<<endl;
    return;
   }
      bool b=0;
      int ans;
   if(s.length()%2!=0){
     ans= s.length()/2;
     for(int i=1; i<s.length(); i++){
      if(s[i]== '1'){
        b=1;
        break;
      }

     }
           if(b){
        cout<<ans+1<<endl;
      }
      else{
        cout<<ans<<endl;
      }
   }
   else{
          bool b=0;
     int ans= s.length()/2;
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