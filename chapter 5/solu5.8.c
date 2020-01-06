#include <stdio.h>
int main(){
    int price,count;
    float mill,handloom;
    printf("enter price:");
    scanf("%d",&price);
    if(price>0&&price<=100){
        count=1;
    }
    else if(price>100&&price<=200){
        count=2;
    }
    else if(price>200&&price<=300){
        count=3;
    }
    else if(price>300){
        count=4;
    }
    switch(count){
    case 1:
        mill=0;
        handloom=0.05;
        break;

    case 2:
        mill=0.05;
        handloom=0.075;
        break;

    case 3:
        mill=0.075;
        handloom=0.1;
        break;

    case 4:
        mill=0.1;
        handloom=0.15;
        break;

    default:printf("pls check ur amount again");
    }
float discount_price_mill=(price-(price*mill));
float discount_price_handloom=(price-(price*handloom));
printf("%f %f",discount_price_mill,discount_price_handloom);
return 0;
}
