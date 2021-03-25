//https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/micro-and-array-update/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--){
        long long int n,k;
        cin>>n>>k;
        int a[n];
        long long steps=0;
        long long min=0;
        for(long long int i=0;i<n;++i){
            cin>>a[i];
            }
        min=a[0];
        for(long long int i=0;i<n;++i){
            if(min>a[i]){
                min=a[i];
            }
           
        }
        if(k<min){
            steps=0;
        }
        else{
        steps=k-min;}
       
        cout<<steps<<endl;
    }
  
    return 0;
}
