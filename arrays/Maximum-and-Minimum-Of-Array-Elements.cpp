//https://practice.geeksforgeeks.org/problems/maximum-and-minimum-of-array-elements/0#

#include<iostream>
using namespace std;
int main()
 {
	
	int test_case;
	cin>>test_case;
	while(test_case--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;++i){
	        cin>>a[i];
	    }
	    int min=a[0],max=a[0];
	    for(int i=0;i<n;++i){
	        if(min>a[i]){
	            min=a[i];
	        }
	        if(max<a[i]){
	            max=a[i];
	        }
	    }
	    
	    cout<<max<<" "<<min<<endl;
	}
	return 0;
}
