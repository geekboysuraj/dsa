#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int a;
	cin>>a;
	while(a--){
    string s;
    cin>>s;
	int count=0;
    for(int i=0;i<s.size();++i){
		if(fabs(s[i]-s[i+1])==1){
			count++;
		}
		if((s[i]=='z' && s[i+1]=='a')||(s[i+1]=='z' && s[i]=='a')){
			count++;
		}

	}
	if(count==s.size()-1){
		cout <<"YES"<< endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	}
    return 0;
}
