//https://codeforces.com/contest/263/problem/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[5][5];
    int x, y;
        for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cin>>A[i][j];
        }
       
    }
    
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            if(A[i][j]== 1)
            {
                x= i;
                y= j;
            }
        }
    }
 
 cout<<abs(x-2)+ abs(y-2)<<endl;
    
}