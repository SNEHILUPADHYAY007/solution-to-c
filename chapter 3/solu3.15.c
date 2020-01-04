#include <stdio.h>
int main(){
    int a,b,c;
    printf("enter three values:");
    scanf("%d %d %d",&a,&b,&c);
    int sum=a+b+c;
    int avg=(a+b+c)/3;
    int max=a;
    (max<b)&&(max=b);
    (max<c)&&(max=c);
    int min=a;
    (min>b)&&(min=b);
    (min>c)&&(min=c);
    printf("sum=%d,avg=%d,max=%d,min=%d",sum,avg,max,min);


return 0;
}
