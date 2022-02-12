//Question Link: https://codeforces.com/contest/1370/problem/B

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
   vp(i, v, 2*n);
   vector<pair<int, int>> even, odd;
   fo(i, 2*n){
    if(v[i]%2==0){
      even.pb({v[i], i});
    }
    else{
      odd.pb({v[i], i});
    }
   }
   // for(auto it: even){
   //  cout<<it.first<<" "<<it.second<<endl;
   // }
   // cout<<even.size()<<" "<<odd.size()<<endl<<endl;
if(even.size()%2!=0 && odd.size()%2!=0){
    even.pop_back();
    odd.pop_back();
   }
   else{
    if(even.size()>=odd.size()){
      even.pop_back();
      even.pop_back();
    }
    else{
      odd.pop_back();
      odd.pop_back();
    }
   }  
int count=0;
for(auto it: even){
  cout<<it.second+1<<" ";
  count++;
  if(count==2){
    cout<<endl;
    count=0;
  }
} 
count=0;
for(auto it: odd){
  cout<<it.second+1<<" ";
  count++;
  if(count==2){
    cout<<endl;
    count=0;
  }
} 


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

// if(even.size()%2!=0 && odd.size()%2!=0){
//     even.pop_back();
//     odd.pop_back();
//    }
//    else{
//     if(even.size()>=odd.size()){
//       even.pop_back();
//       even.pop_back();
//     }
//     else{
//       odd.pop_back();
//       odd.pop_back();
//     }
//    }

//   int count=0;
//   if(even.size()!=0){
//     for(auto it: even){
//       fo(i, v.size()){
//         if(v[i]==it){
//           count++;
//           cout<<i+1<<" ";
//           if(count==2) 
//             { count=0;
//               cout<<endl;
//             }
//             break;
//         }
//       }
//     }
//   }
    
//   count=0;
//   if(odd.size()!=0){
//     for(auto it: odd){
//       fo(i, v.size()){
//         if(v[i]==it){
//           count++;
//           cout<<i+1<<" ";
//           if(count==2) 
//             { count=0;
//               cout<<endl;
//             }
//           break;
//         }
//       }
//     }
//   }
//     