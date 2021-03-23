#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    string rev="";
    for(int i=s.size()-1;i>=0;--i){
        rev.push_back(s[i]);
    }
    if(s==rev){
        cout <<"YES"<< endl;
        }
    else{
        cout <<"NO"<< endl;
        }

    return 0;
}
