#include <stdio.h>
#include <math.h>
int main(){
    int j;
    float i,k;
    printf("x");
    for(k=0.1;k<=1.0;k+=0.1){
        printf("\t%2.1f",k);
    }
    printf("\n");

    for(i=0.0;i<=9.0;i++){
        printf("\n%2.1f",i);
        for(j=0;j<9;j++){

        float y=exp(-i);
        printf("\t%2.1f",y);
    }
printf("\n");
}

return 0;
}
