//Question Link: https://codeforces.com/contest/1499/problem/B

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
   int n= s.length();
   string temp= s;

   sort(temp.begin(), temp.end());
   if(s== temp){
    cout<<"YES"<<endl;
   }
   else{
    bool f1=1, f2=1;
    int ind=0;
 for(int i= n-1; i>0; i--){
    if(s[i]== '0' && s[i-1]=='0'){
      ind= i;
      f1=0;
      break;
    }
   }
 for(int i= 0; i<ind; i++){
  if(s[i]=='1' && s[i+1]=='1'){
    f2=0;
    break;
  }
 }
 if(f1 | f2) cout<<"YES"<<endl;
 else cout<<"NO"<<endl;
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