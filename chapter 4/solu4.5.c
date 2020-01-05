#include <stdio.h>
int main(){
    int num1,num2,temp1,temp2;
    printf("enter two numbers:");
    scanf("%d %d",&num1,&num2);
    printf("\t%d\n*\t%d",num1,num2);
    printf("\n---------------");
    int count=1;
    char ch=' ';
    while(num2>0){

        int rem=num2%10;
        int mul1=rem*num1;
        num2=num2/10;
        if(count==1){
            temp1=mul1;
            printf("\n%d*%d is\t%d",rem,num1,temp1);
            mul1=0;
            count++;
        }
        else if(count==2){
            temp2=mul1*10;
            printf("\n%d*%d is\t%d",rem,num1,temp2);
            mul1=0;
            count=0;
        }

    }
printf("\n---------------");
printf("\nAdd them%c%d",ch,(temp1+temp2));
//printf("\n%d %d",temp1,temp2);



return 0;
}
