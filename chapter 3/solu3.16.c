#include <stdio.h>
#define COST 250
int main(){
    int total_call,code;
    printf("enter customer code:");
    scanf("%d",&code);
    printf("enter total calls pls:");
    scanf("%d",&total_call);
    if(total_call>100){
        int cost_on_call=total_call-100;
        int cost_total=(cost_on_call*1.25)+COST;
        printf("customer with code=%d has amount total=%d",code,cost_total);
    }
    else{

        printf("customer with code=%d has amount total=%d",code,COST);
    }





return 0;
}
