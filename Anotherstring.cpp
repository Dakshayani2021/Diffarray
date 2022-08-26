#include <iostream>

using namespace std;
  
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        
        cin>>n>>m;
        string s(m,'B');
        int j;
    
           
            while(n--){
                int j;
                cin>>j;
              j--;
            j = min(j, m - j -1);   
            
         if(s[j]=='B'){
          s[j]='A'; 
         }else
         {
             s[m-1-j]='A'; 
         }
            }
          cout<<s<<endl;
            
        
        
    }

    return 0;
}
