//Question Link: https://codeforces.com/problemset/problem/148/A

//Algorithm1:
//I just created a sieve of first d numbers and just counted all the numbers which are not multiples of them.




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
int sol(int k, int l, int m, int n, int d){
	bool arr[d+1];
	memset(arr, 1, d+1);
	for(int i=1; i<=d; i++){
		if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
			arr[i]=0;
		}
	}
    
    int count=0;
    fo(i, d+1){
    	if(arr[i]== 1){
    		count++;
    	}
    // }
    }
    // fo(i, d+1){
    // 	cout<<arr[i]<<"("<<i<<") ";
    // }
    return count;

}
void solution() {
   int k, l, m, n, d;
   cin>>k>>l>>m>>n>>d;
   // int count=0;
   cout<<d-sol(k, l, m, n, d)+1<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}