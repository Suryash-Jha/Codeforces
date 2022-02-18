//Question Link: https://codeforces.com/problemset/problem/1499/A

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
   int n, k1, k2;
   cin>>n>>k1>>k2;
   int w, b;
   cin>>w>>b;
   int arr[2][n];
   fo(i, 2){
    fo(j, n){
      arr[i][j]=0;
    }
   }
fo(i, k1){
  arr[0][i]= 1;
}
fo(i, k2){
  arr[1][i]= 1;
}
// fo(i, 2){
//   fo(j, n){
//     cout<<arr2[i][j]<<" ";
//   }
//   cout<<endl;
// }
int cw=0, cb=0;
fo(i, n){
  if(arr[0][i]== 1 && arr[1][i]== 1){
    cw++;
  }
  else if(arr[0][i]==0 && arr[1][i]==0){
    cb++;
  }
  else{
    if(arr[0][i]== 1 && arr[1][i]== 0){
      if(arr[0][i+1]==1 && arr[1][i+1]==0){
        cw++;
        cb++;
        i++;
      }
    }
    else if(arr[0][i]== 0 && arr[1][i]== 1){
      if(arr[0][i+1]==0 && arr[1][i+1]==1){
        cw++;
        cb++;
        i++;
      }
    }
  }
}

// cout<<cw<<" "<<cb<<endl;
if(cw< w || cb< b){
  cout<<"NO"<<endl;
}
else{
  cout<<"YES"<<endl;
}
   // int answ=0;
   // int ansb=0;
   // answ+= min(k1, k2);
   // ansb+= min(n-k1, n-k2);

   // cout<<answ<<" "<<ansb<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int count=0;
    w(t)
    {
    // count++;
    // cout<<"#"<<count<<endl;
        solution();
    }
   
    return 0;
}