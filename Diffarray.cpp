#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    
    cin>>t;
    while (t--){
        int n,a[100001];
        
        cin>>n;
        
        for (int i=1;i<=n;i++){
            cin>>a[i];
        }
        
		int l=1;
		for(int i=1;i<n;i++){
			for(int j=n;j>=l;j--)a[j]-=a[j-1];
				a[i]=0;
				sort(a+l,a+n+1);
				while(a[l]==0&&l<=n)l++;
		}
        cout<<a[n];
        cout<<endl;
    }

    return 0;
}
