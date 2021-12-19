//https://codeforces.com/contest/69/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int xa=0, ya=0, za=0;
    while(n--)
    {
        int x, y, z;
        cin>>x>>y>>z;
        xa+= x;
        ya+= y;
        za+= z;
    }
    if(xa==0 && ya==0 && za==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
}
