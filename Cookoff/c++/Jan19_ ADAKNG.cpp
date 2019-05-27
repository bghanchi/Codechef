/*
User: bharat12
Problem: : ADAKNG 
Contest:  January Cookoff Challenge
*/


#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll row,col,move;
		cin>>row>>col>>move;
		ll x1,x2,y1,y2;
		if(row+move>8)y2=8;
		else
		y2=row+move;
		
			if(row-move<=0)y1=1;
		else
		y1=row-move;
	if(col+move>8)x2=8;
		else
		x2=col+move;

	if(col-move<=0)x1=1;
		else
		x1=col-move;
		cout<<(y2-y1+1)*(x2-x1+1)<<endl;
	
	}
	return 0;
}