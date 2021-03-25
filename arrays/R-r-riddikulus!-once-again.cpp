//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/k-rotation-is-what-you-can-855157f8/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,d;
	cin>>n>>d;
	int a[n];
	int temp=0;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	for(int i=0;i<d;i++){
		int temp=a[0];
		for(int j=0;j<n;j++){
			if(j==n-1){
				a[j]=temp;
			}
			else{
				a[j]=a[j+1];}
		}
	}
	for(int i=0;i<n;++i){
		cout<<a[i]<<" ";
	}
 return 0;
}
