//https://codeforces.com/problemset/problem/1616/B

//Unable to do it in the contest...but finallyyyyy...in just 1 go i am able to submit it properly.
//Voilllaaaa!!! such a great end of the year!!
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
   string s, str, temp;
   cin>>s;
   fo(i, n){
    if(s[i]<s[i+1]){
        str.pb(s[i]);
      break;
    }
    else if(s[0]== s[i+1] )
      {
        str.pb(s[0]);
        break;
      }
    else{
      if(s[i]>=s[i+1])
      {
          str.pb(s[i]);
        //   str.pb(s[i+1]);
      }
      else{
          s[i+1];
          break;
      }
    }
   }
 
   cout<<str;
   reverse(str.begin(), str.end());
   cout<<str<<endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}