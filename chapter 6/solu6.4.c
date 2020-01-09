#include <stdio.h>
int main(){
    int temp,a=1,b=1,sum=0,count=0;
    printf("fibo series:\n");
    printf("%d\t%d\t",a,b);
    do{
        sum=a+b;
        temp=a;
        b=a;
        a=sum;
        printf("%d\t",sum);
        count++;
    }while(count<=5);


return 0;
}
