#include <stdio.h>
int main(){
    int temp,a=1,b=1,count=0,sum=0;
    printf("fibo series is:\n");
    printf("%d\t%d\t",a,b);
    for(int i=0;count!=8;i++){
        sum=a+b;
        temp=a;
        b=temp;
        a=sum;
        printf("%d\t",sum);
        count++;
    }



return 0;
}
