#include <stdio.h>
int main(){
    int num1,num2,i,min,max;
    printf("enter the numbers:");
    scanf("%d %d",&num1,&num2);
    if(num1>num2){
        min=num2;
    }
    else{
        min=num1;
    }
    for(i=1;i<min;i++){
        int rem1=num1%i;
        int rem2=num2%i;
        if(rem1==0&&rem2==0){
            max=i;
        }
    }
    printf("gcd is:%d",max);


return 0;
}
