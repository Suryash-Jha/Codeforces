//Question Link: https://codeforces.com/problemset/problem/1374/C

/*
Algorithm: 

Using stack for holding character, according to condition:
1.) if string[i]= '(' ->   push it into stack
2.) if stack.top= '(' && string[i]== ')' then pop from stack.
3.) else push '('

now after these operations whatever is the size of stack ..divide it with 2 and print it.

(I dont know how to avoid segmentation fault hence i pushed a random charcter in the stack so that segmentation fault never occurs.)
*/


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
   int n;
   cin>>n;
   string str;
   cin>>str;
   stack<char> s;
   s.push('a');
   for(int i=0; i<str.length(); i++)
   {
   	if(str[i]=='(')
   		s.push('(');
   	else if(str[i]==')' && s.top()=='(')
   		s.pop();
   	else
   		s.push(')');
   }
   cout<<(s.size()-1)/2<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    w(t)
    {
        solution();
    }
   
    return 0;
}