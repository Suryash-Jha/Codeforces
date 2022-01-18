//Question Link: https://codeforces.com/problemset/problem/1409/B

//VERY VERYYYYYYYYY TIME CONSUMIIIIINGGGG QUESTION FOR MEEEE!!!

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
// #define printtt(i) cout<<i<<" ";

typedef vector<int> vi;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; //*find_by_order(val);   order_of_key(val);

void solution() {
	int a, b, x, y, n, min1, min2;
	cin>>a>>b>>x>>y>>n;
	if(a-n>=x){
		min1= a-n;
	}
	else{
		min1= x;
	}
	if(b-n>=y){
		min2= b-n;
	}
	else{
		min2= y;
	}

	if(min1<min2){
      if(a-n>=x){
        // printtt(1)
      	cout<<(a-n)*b<<endl;
      }
      else{
      	n-= a-x;
      	a=x;
      	if(b-n>=y){
      		// printtt(2)
      		cout<<(b-n)*a<<endl;
      	}
      	else{b=y;
      		// printtt(3)
      		cout<<a*b<<endl;
      	}
      }
	}
	else{
	if(b-n>=y){
		// printtt(4)
      	cout<<(b-n)*a<<endl;
      }
      else{
      	n-= b-y;
      	b=y;
      	if(a-n>=x){
      		// printtt(5)
      		cout<<(a-n)*b<<endl;
      	}
      	else{
      		a=x;
      		// printtt(6)
      		cout<<a*b<<endl;
      	}
      }

	}
   // cout<<min1<<" "<<min2<<endl<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}