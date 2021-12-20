// Question Link: https://codeforces.com/contest/199/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int arr[46]={0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 701408733, 1134903170};
	
    int n;
    cin>>n;

	if(n==0)
	{
      cout<<"0 0 0"<<endl;
	}
	else if(n==1)
	{
		cout<<"1 0 0"<<endl;
	}
	else if(n==2)
	{
      cout<<"0 1 1"<<endl;
	}
	else
	{
		
		cout<<arr[lower_bound(arr, arr+46, n)-arr-1]<<" "<<arr[lower_bound(arr, arr+46, n)-arr-3]<<" "<<arr[lower_bound(arr, arr+46, n)-arr-4]<<endl;
	}
	
 
}