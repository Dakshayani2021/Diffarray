#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,l,r;
		cin>>n>>l>>r;
		int flag=0;
		for(int i=1;i<=n;i++) 
		if((l-1)/i==r/i) 
		flag=1;
		if(flag) 
		cout<<"NO"<<endl;
		else{
			cout<<"YES"<<endl;
			for(int i=1;i<=n;i++)
			{
				cout<<r/i*i<<' ';
			}
			cout<<endl;
		}
	}
}
