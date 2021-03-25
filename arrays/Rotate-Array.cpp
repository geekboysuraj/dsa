//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1#

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int test_case;
    cin>>test_case;
    
    while(test_case--){
	int n,d;
	cin>>n>>d;
	int a[n];
	int temp=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);


    for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
    cout<<endl;
    }
    
 return 0;
}
