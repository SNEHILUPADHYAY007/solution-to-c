#include <bits/stdc++.h>
using namespace std;

bool checkBracket(string str){
    stack<char>s;
    for(int i=0;i<str.length();i++){
        if(str[i]=='[' || str[i]=='{' || str[i]=='('){
                s.push(str[i]);
                continue;
        }

            if(str[i]==')'){
                if(s.top()=='('){

                    s.pop();

                }
                else{
                    cout<<"1";
                    return false;
                }
            }
            else if(str[i]=='}'){
                if(s.top()=='{'){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else if(str[i]==']'){
                if(s.top()=='['){
                    s.pop();
                }
                else{
                    return false;
                }
            }




    }
    return s.empty();


}


int main(){
    string str;
    bool check;
    cout<<"enter ur string:";
    cin>>str;
    check=checkBracket(str);
    if(check){
        cout<<"balanced";
    }
    else{
        cout<<"not balanced";
    }
return 0;
}
