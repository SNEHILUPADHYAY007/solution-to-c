#include <bits/stdc++.h>
using namespace std;

void showStacks(stack<int>s1,stack<int>s2){
    cout<<"s1:";
    while(!s1.empty()){
        cout<<s1.top()<<"\t";
        s1.pop();
    }

    cout<<"\n"<<"s2:";
    while(!s2.empty()){
        cout<<s2.top()<<"\t";
        s2.pop();
    }

}


int main(){
    stack <int> s1;
    stack <int> s2;

    s1.push(10);
    s1.push(20);

    s2.push(1);
    s2.push(2);

    s2.swap(s1);

    showStacks(s1,s2);



return 0;
}
