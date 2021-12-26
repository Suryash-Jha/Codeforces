//Question Link: https://codeforces.com/problemset/problem/58/A



#include<bits/stdc++.h>
using namespace std;

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


void solution() {
   string str;
   cin>>str;
   stack<char> s;
   s.push('o');
   s.push('l');
   s.push('l');
   s.push('e');
   s.push('h');
for(int i=0; i<str.length(); i++)
{if(s.empty()){
	b=1;
	break;
}
	if(s.top()== str[i])
	{  

		s.pop();
	}
}

if(s.size()){
	cout<<"NO"<<endl;
}
else
{
	cout<<"YES"<<endl;
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