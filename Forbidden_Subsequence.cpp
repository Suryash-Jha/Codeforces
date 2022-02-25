//Question Link: https://codeforces.com/problemset/problem/1617/A

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
   string s, t, ans;
   cin>>s>>t;
   string temp= t;
   map<char, int> m;
   fo(i, s.length()){
    if(s[i]=='a'|| s[i]=='b'|| s[i]=='c')
    m[s[i]]++;
    else
      ans.pb(s[i]);
   }
   sort(ans.begin(), ans.end());
   bool b=1;
   sort(t.begin(), t.end());
   fo(i, t.size()){
    if(t[i]!= temp[i]) 
      {
        b=0;
      break;
    }
   }
   if(b && m['a']!=0){
    swap(t[1], t[2]);
   }
   fo(i, t.length()){
    fo(j, m[t[i]])
    cout<<t[i];
   }
   cout<<ans;
   cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}