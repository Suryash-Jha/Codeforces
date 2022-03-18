//Question Link: https://codeforces.com/contest/1490/problem/B

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
   int avg= n/3;
   vp(i, v, n);
   int arr[3]={0};
   fo(i, n){
    // cout<<abs(avg-(v[i]%3))<<" ";
    arr[v[i]%3]++;
   }
int c=0;
   fo(i, 7){
    fo(j, 3){
      if(arr[j]>avg){
        c+= arr[j]-avg;
        arr[(j+1)%3]+=arr[j]-avg; 
        arr[j]-= arr[j]-avg;
      }
    }
   }
   // fo(i, 3){
   //  cout<<arr[i]<<" ";
   // }
   // cout<<endl;
   cout<<c<<endl;
   // fo(j, 3){
   //  cout<<arr[i]<<" ";
   // }
   // cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}