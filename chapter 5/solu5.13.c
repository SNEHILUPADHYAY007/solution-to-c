#include <stdio.h>
int main(){
    int i,sum=0,count=0;
    for(i=0;i<=100;i++){
        if(i%6==0&&i%4!=0){
            sum=sum+i;
            count++;
        }
    }
    printf("sum is:%d,such numbers are:%d",sum,count);



return 0;
}
