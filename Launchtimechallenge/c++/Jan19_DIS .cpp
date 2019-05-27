/*
User: bharat12
Problem: DIS 
Contest:   January Launchtime Challenge
*/

#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{	
		int n;
		cin>>n;
		double arr1[n];
		double arr2[n];
		int flagzero=0;
		int flagthird=1;
		for(int i=0;i<n;i++)
		{
			cin>>arr1[i];
			if(arr1[i]==0&&i!=0)
			{
				flagzero=1;
			}
		}
		for(int i=0;i<n;i++)
		{
			cin>>arr2[i];
			if(arr2[i]==0&&i!=n-1)
			{
				flagzero=1;
			}
		}
		if(arr1[0]!=0||arr2[n-1]!=0||arr1[n-1]!=arr2[0])
		{
			cout<<"No"<<endl;
			continue;
		}
		double max=arr1[n-1];
		int flag=1;
		for(int i=0;i<n;i++)
		{
			if(arr1[i]+arr2[i]<max)
			{
				flag=0;
				break;
			}
			if(arr1[i]+max<arr2[i]||arr2[i]+max<arr1[i])
			{
				flagthird=0;
				break;
			}
		}
		if(flag&&flagzero==0&&flagthird)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}	
	}
	return 0;
}

