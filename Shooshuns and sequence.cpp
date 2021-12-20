//Question Link: https://codeforces.com/contest/222/problem/A


/*
Algorithm:
(
----- Not necessary-----

Firstly, try to simulate as directed in question, as by doing that you can observe what is actually happening.
Now, if you want to simulate that, just have a while loop which will perform the operations atleast 100 times.

)


(Indexing the array from 1 to N)
A sequence can only become equal if and only if:
   --> All the elements after(K+1 to N) Kth index are equal to element at Kth index.


Create a variable for Number of operations and set that equal to zero(As i forgot to do that and got garbage value for cases which had all elements equal).

Now, if this condition is met, then for number of operations you just have to count the number of elements before(i.e. K-1 to 1) kth element which are equal to kth element.
and return the index when this fails.






*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin>>n>>k;
	bool b=1;
	int v[n+1];
	for(int i=1; i<=n; i++)
	{
		
		cin>>v[i];
		
	}
	for(int i=k+1; i<=n; i++)
	{
		if(v[i]!=v[k])
			b=0;
	}
	int ans=0;
	if(!b)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		for(int i=k-1; i>0; i--)
		{
			if(v[i]!=v[k])
			{ ans=i;
				break;
			}
		}
		cout<<ans;
	}
}
