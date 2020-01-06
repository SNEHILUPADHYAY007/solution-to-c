#include <stdio.h>
#define METER_COST 100
int main(){
    float charge,total,total_new;
    printf("enter ur meter reading:");
    scanf("%f",&charge);
    if(charge<=200){
        total=charge+(charge*0.8);

    }
    else if(charge>200&&charge<=300){
        total=charge+(charge*0.9);
    }
    else if(charge>300&&charge<=400){
        total=charge+(charge*1);
    }
    else if(charge>400){
        total=(charge*1);
        total_new=charge+(total*0.15);
        printf("ur extra amount after adding is:%f",total_new);
    }
    printf("\nur total amount is:%f",total);

return 0;
}
