//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string direction;
    cin>>direction;
    int a=0,b=0;
    for(int i=0;i<direction.size();++i){
        if(direction[i]=='L'){
            a=a-1;
        }
         if(direction[i]=='R'){
            a=a+1;
        }
         if(direction[i]=='U'){
            b=b+1;
        }
         if(direction[i]=='D'){
            b=b-1;
        }

    }
    cout<<a<<" "<<b;
    return 0;
}
