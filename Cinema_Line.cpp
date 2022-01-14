//Question Link: https://codeforces.com/problemset/problem/349/A

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
   int n;
   cin>>n;
   vp(i, v, n);
   bool b=1;
   int ct25=0, ct50=0, ct100=0;
   fo(i, n){
    if(v[i]== 25) ct25++;
    else if(v[i]== 50) 
      {
        // ct50++;
        if(ct25<1)
        {
          b=0;
          break;
        }
        else{
          ct25--;
        ct50++;
        }
      }
    else{

      if(ct50>=1 && ct25>=1)
      {
        ct50--;
        ct25--;

      }
      else if(ct25>=3){
        ct25-= 3;

      }
      else{
        b=0;
        break;
      }

      }


   }
   // cout<<"ct25= "ct25<<"ct50= "<<" "<<ct50<<"ct100"<<endl;
   if(b){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
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