//Question Link: https://codeforces.com/problemset/problem/1436/B

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
vi shift1(vi &v){
  int temp= v[0];
  fo(i, v.size()-1){
    v[i]= v[i+1];
  }
  v[v.size()-1]= temp;
  return v;
}
void solution() {
   int prime[30]= {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113};
   int a;
   bool b=0;
   cin>>a;
   // int mat[a][a]={1};

   fo(i, 30){
    if(prime[i]==a){
      b=1;
      fo(i, a){
        fo(j, a){
          cout<<1<<" ";
        }
        cout<<endl;
      }
      break;
    }
   }
   if(!b){

    
    // cout<<var<<endl;
    vi v;
    fo(i, var){
      v.pb(1);
    }
    fo(i, a-var){
      v.pb(0);
    }
    fo(i, a){
      for(auto it: v){
        cout<<it<<" ";

      }
      cout<<endl;
      shift1(v);
    }

    // cout<<endl;


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