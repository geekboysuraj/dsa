//https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/factorial-game-1/

#include <bits/stdc++.h>

using namespace std;
const int M=1000000007;
const int N=1e5+1;
long long int A[N];

int main(){
    A[0]=1;
    for(int i=1;i<N;++i){
        A[i]=((i*(A[i-1]))%M);
    }
    int q;
    cin>>q;
    while(q--){
        int n;
        cin>>n;
        cout<<A[n]<<endl;
    }

}
