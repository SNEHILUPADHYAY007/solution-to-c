#include <stdio.h>
int main(){
    int number,sum=0;
    printf("enter the number:");
    scanf("%d",&number);

    while(number>0){
        int rem=number%10;
        sum=sum+rem;
        number=number/10;
    }
    printf("sum=%d",sum);

return 0;
}
