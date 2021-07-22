// Check Balance Parentheis using Stack


#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<char> stk;
    string str = "{}(((([]))))";

for(int i=0;i<str.length();i++){
    if(str[i] == '(' ||str[i] == '['|| str[i] ==  '{'){
        stk.push(str[i]);
    }
    if(str[i] == ')' ||str[i] == ']'|| str[i] ==  '}'){
        if( stk.top() == '(' && str[i]==')'){
            stk.pop();
        }
        else if( stk.top() == '[' && str[i]==']'){
            stk.pop();
        }
        else if( stk.top() == '{' && str[i]=='}'){
            stk.pop();
        }

    }

}

if(stk.empty()){
    cout<<"Balanced"<<endl;
}
else{
    cout<<"UnBalanced"<<endl;
}
    return 0;
}
