//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

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




//Method 2nd


#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int rev=0;
	int last=s.size()-1;
    for(int i=0;i<s.size()/2;++i){
        
			if(s[i]==s[last]){
				rev++;
				}
		last--;
    }
    if(rev==s.size()/2){
        cout <<"YES"<< endl;
        }
    else{
        cout <<"NO"<< endl;
        }

    return 0;
}
