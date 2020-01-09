#include <stdio.h>
int main(){
    int num,rem[10],quo;
    printf("enter the number:");
    scanf("%d",&num);
    int i=0;
    while(num>0){
        quo=num/2;
        rem[i]=num%2;
        //printf("rem=%d",rem[i]);
        num=quo;
    i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",rem[j]);
    }



return 0;
}
