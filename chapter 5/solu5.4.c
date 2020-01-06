#include <stdio.h>
int main(){
    int number[10],i,count=0,num,count_1=0,count_2=0,count_3=0;
    printf("enter the numbers of students:");
    for(i=0;i<10;i++){
        scanf("%d",&number[i]);

    }
    for(i=0;i<10;i++){
        num=number[i];
        if(num>80&&num<=100){
            count++;
        }
        else if(num>60&&num<=80){
            count_1++;
        }
        else if(num>40&&num<=60){
            count_2++;
        }
        else if(num<40&&num>=0){
            count_3++;
        }




}
printf("students with marks greater than 80:%d",count);
printf("\nstudents with marks greater than 60 and less than 80:%d",count_1);
printf("\nstudents with marks greater than 40 and less than 60:%d",count_2);
printf("\nstudents with marks greater than 0 and less than 40:%d",count_3);




return 0;
}
