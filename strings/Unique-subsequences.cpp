// https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/unique-subsequence-264057c9/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int test_cases;
	cin>>test_cases;
	while(test_cases--)
	{
		int num;
		cin>>num;
		string s;
		cin>>s;
		int count=0;
		for(int i=0;i<num;i++){

			if(s[i]==s[i+1]){
				continue;
			}
			count++;
	
}
	cout<<count<<endl;

	}
 return 0;
}
