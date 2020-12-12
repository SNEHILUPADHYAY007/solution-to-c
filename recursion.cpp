#include <bits/stdc++.h>
using namespace std;

void factorial(int num,int fact){
    if(num<=1){
        cout<<"factorial is:"<<fact;

    }
    else{
        fact*=num;
        factorial(--num,fact);
    }


}


int main(){
    int fact=1,num;
    cout<<"enter no to find it's factorial";
    cin>>num;
    factorial(num,fact);


return 0;
}
