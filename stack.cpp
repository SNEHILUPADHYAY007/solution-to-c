#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,choice,top=-1,data;
    char ch;
    cout<<"enter no of elements:";
    cin>>n;
    int stack[n];
    do{
        cout<<"press 1 for push 2 for pop"<<"\n";
        cin>>choice;
        switch(choice){
        //push
        case 1:

                if(top==n-1){
                    cout<<"overflow"<<"\n";
                    break;
                }
                else{
                    cout<<"enter element to push"<<"\n";
                    cin>>data;
                    top+=1;
                    stack[top]=data;
                }
                break;
        case 2:
                if(top<0){
                    cout<<"underflow"<<"\n";
                    break;
                }
                else{
                    int item=stack[top];
                    top-=1;
                    break;
                }
                break;
        default:
            printf("no case\n");
            break;

        }
        cout<<"wanna continue,press:'Y' or 'y'"<<"\n";
        cin>>ch;
    }while(ch=='Y'||ch=='y');
    for(int i=0;i<=top;i++){
        printf("%d:%d\n",i+1,stack[i]);
    }

return 0;
}
