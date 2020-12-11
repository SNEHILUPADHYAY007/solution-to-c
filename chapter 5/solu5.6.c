#include <stdio.h>
#include <math.h>
int main(){
    float i,j,sqrt_num;
    printf("number\t");
    for(i=0.0;i<1.0;i+=0.1){
            printf("%2.1f\t",i);
    }
        for(j=0.0;j<=9.0;j++){
            printf("\n%2.1f\t",j);


            for(i=0.0;i<1.0;i+=0.1){
            sqrt_num=sqrt(j+i);
            printf("%4.3f\t",sqrt_num);
    }
printf("\n");
}



return 0;
}
