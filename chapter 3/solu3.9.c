#include <stdio.h>
#include <math.h>
int main(){
    int rate,cost,time;
    float eoq,tbo;
    printf("enter demand rate,setup cost,holding time:");
    scanf("%d %d %d",&rate,&cost,&time);
    eoq=sqrt((2*rate*cost)/time);
    printf("EOQ=%f",eoq);
    tbo=sqrt((2*cost)/(rate*time));
    printf("\tTBO=%f",tbo);




return 0;
}
