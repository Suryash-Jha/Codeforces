//Question Link: https://codeforces.com/problemset/problem/208/A

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
   vector<char> v;
   fo(i, s.length()){
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
      v.push_back('&');
      i+=2;
    }
    else{
      v.push_back(s[i]);
    }
   }
   bool b=1;
   for(auto it: v){

    if(it!= '&'){
      b=0;
      cout<<it;
    }
    else{
      if(!b)
      cout<<" ";
    b=1;
    }
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