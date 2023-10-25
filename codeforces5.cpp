#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
int n;
cin>>n;
if(n%2==0)
{
	int ans=n/2;
	cout<<ans<<endl;
	int i=2;
	while(ans--)
	{
		cout<<i<<" "<<i+1<<endl;
		i+=6;
	}
	
}
else
{
	if(n==1)
	{
	cout<<1<<endl;
	cout<<1<<" "<<2<<endl;}
	else
	{
	
	int ans=n/2+1;
	cout<<ans<<endl;
	ans--;
	int i=2;
	while(ans--)
	{
		cout<<i<<" "<<i+1<<endl;
		i+=6;	
	}
	i-=6;
	cout<<i+4<<" "<<i+5<<endl;
}
}
	}
	return 0;
}
