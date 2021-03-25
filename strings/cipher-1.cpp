//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cipher-1/


#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	
    string s;
    cin>>s;
	int num;
	cin>>num;
	int a=0;
	string enc="";
	int length = s.size()-1;

	for(int i=0;i<=length;i++){
		if((int)s[i]>=65 && (int)s[i]<=90){
			a=s[i]+num%26;
			
			if(a>90){
				a=a-26;
			}
			enc.push_back(a);
		}
		else if((int)s[i]>=97 && (int)s[i]<=122){
			a=s[i]+num%26;
			
			if(a>122){
				a=a-26;
			}
			enc.push_back(a);
			}

		else if((int)s[i]>=48 && (int)s[i]<=57){
			a=s[i]+num%10;
			
			if(a>57){
				a=a-10;
			}
			enc.push_back(a);
		}
		
		else{
			enc.push_back(s[i]);
		}
	}
	cout<<enc;
    return 0;
}
