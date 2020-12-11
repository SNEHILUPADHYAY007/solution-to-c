#include <stdio.h>
int main(){
    long int number;
    printf("enter the number:");
    scanf("%ld",&number);
    //printf("%ld",number);
    int rem,sum=0;
    while(number>0){
        rem=number%10;
        sum=sum+rem;
        number=number/10;
    }
    printf("sum of digits is:%d",sum);

return 0;
}
