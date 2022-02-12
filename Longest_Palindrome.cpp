//Question Link: https://codeforces.com/problemset/problem/1304/B

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
vector<string> v;
fo(i, n){
  string s;
  cin>>s;
  v.pb(s);
}



//case 1: A is not Palindrome & B is reverse of A
//case 2: A is a palindrome & have more than two characters

vector<string> np;
map<string, int> p;
fo(i, n){
  string s= v[i];
  string temp=s;

  reverse(s.begin(), s.end());
  if(temp==s){
    p[s]++;
  }
  else{

  for(int j=i+1; j<n; j++){
    if(v[j]== s){
      np.pb(s);
      break;
    }
  }
  }
}

// for(auto it: np){
//   cout<<it<<" ";
// }
// cout<<endl;
int maxm= 0;
string pal;
for(auto it: p)
{
  if(it.second>maxm){
    pal= it.first;
    maxm= it.second;
  }
}
string fin=pal, ans="";
fo(i, maxm-1){
  fin+= pal;
}
fo(i, np.size()){
  ans+= np[i];
}
cout<<(2*np.size()*k) + (maxm*k)<<endl;
cout<<ans<<fin;
reverse(ans.begin(), ans.end());
cout<<ans<<endl;

// cout<<fin<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}