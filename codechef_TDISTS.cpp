/**
problem https://www.codechef.com/problems/TDISTS 
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    
	    int n=1;
	    while ((n*n) < (x+y))
	        n++;
	        
	    if ((n*n) != (x+y)){
	       cout<<"NO"<<"\n";
	       
	       continue;
	    }
	    
	    if (n == 1){
	        if (x == 1){
	            cout<<"YES"<<"\n";
	            cout<<n<<"\n";
	            continue;
	        }else{
	            cout<<"NO"<<"\n";
	            
	            continue;
	        }
	    }
	    
	    int even = 1;
	    int odd = n-1;
	    bool check = false;
	    
	    while(odd>0){
	        if ((2*odd*even) == y){
	            check = true;
	            break;
	        }
	        odd--;
	        even++;
	    }
	    
	    if (!check){
	        cout<<"NO"<<"\n";
	        //cout<<t<<" ";
	        continue;
	    }
	    
	    cout<<"YES"<<"\n";
	    cout<<n<<"\n";
	    for(int i=1; i<=odd; i++){
	        cout<<1<<" "<<i+1<<"\n";
	    }
	    for(int i=1; i<even; i++){
	        cout<<2<<" "<<i+odd+1<<"\n";
	    }
	}
	return 0;
}
