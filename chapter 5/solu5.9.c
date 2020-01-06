#include <stdio.h>
int main(){
    int x,count;
    printf("enter the value for x:");
    scanf("%d",&x);
    //part 1

    /*if(x<0){
        count=1;
    }
    if(x>0){
        count=-1;
    }
    if(x==0){
        count=0;
    }
printf("%d",count);
*/
    //part 2
/*
    if(x<0){
        count=1;
    }
    else if(x>0){
        count=-1;
    }
    else{
        count=0;
    }
    printf("%d",count);
*/
    //part 3
count= ((x<0)?-1:(x>0?1:0));
printf("%d",count);
return 0;
}
