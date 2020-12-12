
#include <bits/stdc++.h>
using namespace std;
void showStack(stack <int> s){
    while(!s.empty()){
        cout<<s.top()<<"\t";
        s.pop();
    }

}

int main(){
    int choice;
    char ch;
    stack <int> s;
    do{
        cout<<"press 1 for push and 2 for pop:";
        cin>>choice;
        switch(choice){
        case 1:
            int data;
            cout<<"enter data:";
            cin>>data;
            s.push(data);
            break;

        case 2:
            if(s.empty()){
                cout<<"underflow";
                break;
            }
            else{
                s.pop();
                break;
            }
            break;

        default:
            cout<<"wrong entry";
            break;

        }



        cout<<"wanna continue:"<<"\n";
        cin>>ch;
    }while(ch=='Y'||ch=='y');
    showStack(s);


return 0;
}

