    #include<iostream>
    using namespace std;
    int main(){
    	int t;cin>>t;
    	while(t--){
    		int n;cin>>n;
    		int x,y,flag=0;cin>>y;
    		for(int i=2;i<=n;i++)
    			cin>>x,flag|=(x%y!=0);
    		if(flag) cout<<"NO\n";
    		else cout<<"YES\n";
    	}
    }


