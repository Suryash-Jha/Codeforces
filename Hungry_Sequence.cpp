//Question Link : https://codeforces.com/contest/327/problem/B

//I just printed first n prime numbers and it worked!

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
void prime_eratos(int N, int count) {

    int root = (int)sqrt((double)N);
    bool *A = new bool[N + 1];
    memset(A, 0, sizeof(bool) * (N + 1));
    for (int m = 2; m <= root; m++) {
        if (!A[m] && count>0) {
            {
              printf("%d ",m);
              count--;
            }
            for (int k = m * m; k <= N; k += m)
                A[k] = true;
        }
    }

    for (int m = root; m <= N; m++)
        if (!A[m] && count>0)
            {printf("%d ",m);
             count--;}
    delete [] A; 
}

void solution() {
   int n;
   cin>>n;
   prime_eratos(9999999, n);
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    // w(t)
    {
        solution();
    }
   
    return 0;
}