//Question Link: https://codeforces.com/contest/1625/problem/A

//Such a weird language question!!!
//Spent almost 2 hours just on implementation and result overfloweddd
//but now its workingggg!!!

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


vector<int> decToBinary(int n, int l)
{
    // array to store binary number
    int binaryNum[l]={0};
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 vi v;
    // printing binary array in reverse order
    for (int j = l - 1; j >= 0; j--)
        v.pb(binaryNum[j]);
   return v;
}

void solution() {
   int n, l;
   cin>>n>>l;
   vp(i, v, n);
   int arr[l]={0};
   for(int i=0; i<n; i++){
    vi ans= decToBinary(v[i], l);
   for(int j=0; j<l; j++){
    if(ans[j]== 1){
      arr[j]++;
    }
   }
   // cout<<endl;
   }
  int sum=0;
//   cout<<sum1<<endl;
   for(int i=0; i<l; i++){
    // cout<<arr[i]<<" ";
    if(arr[i]>(n/2))
    {
      arr[i]= 1;
    }
    else{
      arr[i]= 0;
    }
    // s.pb(ans[i]);
   }
   reverse(arr, arr+l);
   fo(i, l){
    // cout<<arr[i]<<endl;
    if(arr[i]==1)
    sum+= pow(2, i);
   }
   cout<<sum<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}