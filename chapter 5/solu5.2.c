#include <stdio.h>
int main(){
    int count=0,sum=0;
    int number=101;

    while(number<200){
        if(number%7==0){
            sum=sum+number;
            count++;
            //printf("%d",count);
        }
        number++;
    }
printf("sum=%d,count=%d",sum,count);
return 0;
}
