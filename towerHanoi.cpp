#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n,char from,char to,char aux){
    if(n==1){
        cout<<"Item 1 move from"<<from<<"to"<<to<<"\n";
        return;
    }
    towerOfHanoi(n-1,from,aux,to);
    cout<<"Item "<<n<<"from rod"<<from<<"to"<<to<<"\n";
    towerOfHanoi(n-1,aux,to,from);
}

int main(){
        int n;
        cout<<"enter items";
        cin>>n;
        towerOfHanoi(n,'A','C','B'); // A=from,C=to,B=Auxiliary.
return 0;
}
