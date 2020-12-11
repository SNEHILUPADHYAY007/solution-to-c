#include <stdio.h>
int main(){
    int a[10],sum=0,i,c=0;
    printf("enter the values");
    for(i=0;i<=10;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<=10;i++){
        sum=sum+a[i];
        if(sum>999){
            printf("sum exceeds");
            c++;
            break;
        }
    }
    if(c==0){
    printf("%d",sum);
    }


}
