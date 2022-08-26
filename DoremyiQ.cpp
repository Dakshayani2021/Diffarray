    #include<bits/stdc++.h>
    using namespace std;
    int a[100010];
    int b[100010];
    int main(){
    	int t;
    	cin>>t;
    	while(t--){
    		int n,q=0,q1;
    		cin>>n>>q1;
    		for(int i=1;i<=n;i++) cin>>a[i];
    		for(int i=n;i>=1;i--){
    			if(a[i]>q && q<q1) b[i]=1,q++;
    			else if(a[i]<=q) b[i]=1;
    		}
    		for(int i=1;i<=n;i++) cout<<b[i],b[i]=0;
    		if(t!=0) cout<<endl;
    	}
    	return 0;
    }
