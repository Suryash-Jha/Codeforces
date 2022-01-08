//Question Link:https://codeforces.com/problemset/problem/327/A

/*


Algorithm:

This ques can be solved by Kadane's algorithm.
 First, store the count of current no. of 1s.
 Now, change 1 to -1 & 0 to 1;

 Maintain 2 variables:
 max_current & max_so_far (Here, m1 & m2);
 Now add the value max_current with a[i];
 if max_current is negative then set it to 0;
 Just get the highest positive sum from this process and store it in max_so_far.
 Now answer will be current no. 1's without operation and max_so_far.


 ......> CORNER CASE: As a single operation is must to be conducted, hence if there are no zeroes in whole array then just print count of 1 - 1;
 as one of the 1 has to be converted to 0.
*/

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
   int count1=0, m1=0, m2=0;
   while(n--){
    int x;
    cin>>x;
    if(x==1){
      count1++;
      m1+= -1;
      if(m1<0){
        m1= 0;
      }
      m2= max(m2, m1);

    }
    else{
      m1+= 1;
      m2= max(m2, m1);
    }
   }
   if(m2==0)
   {
    cout<<count1-1<<endl;
   }else{

   cout<<count1+ m2<<endl;
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