#include <iostream>

using namespace std;



int main() {

	int n;

	cin>>n;

	int winner;

	    int diff=0;

	    int s=0,t=0,ele;

	while(n--){

	    cin>>ele;

	    s+=ele;

	    cin>>ele;

	    t+=ele;

	    if(diff<abs(s-t)){

	        diff=abs (s-t);

	        if (s>t){

	        winner=1;

	 	        }

	        else{

	        winner=2;

     	       }

	    }

	}   

        cout<<winner<<" ";

	    cout<<diff<<endl;

	  return 0;

}


