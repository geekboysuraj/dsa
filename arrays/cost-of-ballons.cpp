// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int test_cases = 0;
    cin >> test_cases;

    
    for(int i=0;i<test_cases;i++){
        int costOfGreen = 0;
        int costOfPurple = 0;
        cin>>costOfGreen>>costOfPurple;

        int participant;
        cin>>participant;
        int fpCounter = 0;
        int spCounter = 0;
        for(int j=0;j<participant;j++){
            int a[participant];
            int b[participant];
            cin>>a[j]>>b[j];
            if(a[j]==1) fpCounter++;
            if(b[j]==1) spCounter++;
        }
        
        int res=(costOfGreen*fpCounter+costOfPurple*spCounter)>(costOfGreen*spCounter+costOfPurple*fpCounter)?(costOfGreen*spCounter+costOfPurple*fpCounter):(costOfGreen*fpCounter+costOfPurple*spCounter);
        
        cout<<res<<endl;
        
        
    
        
        

    }

}
