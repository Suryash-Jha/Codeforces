//Question Link: https://codeforces.com/problemset/problem/237/A

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
// cout<<"Hey"<<endl;
  int n;
  cin>>n;
  int temp=n;
  vi v;
  while(n--){
   int h, m;
   cin>>h>>m;
   v.pb((h*12) + m);
  }
  int counter=0, maxm=INT_MIN;
fo(i, temp){
  if(v[i]==v[i+1])
    counter++;
  else{
    maxm= max(counter, maxm);
    counter=0;
  }
  // cout<<v[i]<<" ";
}
cout<<maxm+1<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}