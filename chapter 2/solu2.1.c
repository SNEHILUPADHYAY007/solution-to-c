#include <stdio.h>
int main(){
    int n;
    float sum=0.0;
    printf("enter the value of n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        float number=(float)1/i;
        //printf("%f\t",number);
        sum=(sum+number);
    }
    printf("%f",sum);


return 0;
}
