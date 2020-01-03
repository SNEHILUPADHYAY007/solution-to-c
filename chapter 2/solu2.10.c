#include <stdio.h>
#define PERIOD 3
int main(){
    float SI,principal;
    int rate,time;
    printf("hello customer please enter amount,rate:");
    scanf("%f %d",&principal,&rate);
    time=1;
    while(time<=PERIOD){
        SI=(principal*rate*time)/100;
        printf("SI for %d year is:%f",time,SI);
        printf("\n");
        time++;


    }






return 0;
}
