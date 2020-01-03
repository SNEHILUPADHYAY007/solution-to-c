#include <stdio.h>
#include <math.h>
int main(){
    float cap,freq;
    float induct,resistance;
    printf("enter inductance and resistance:");
    scanf("%f %f",&induct,&resistance);
    for(cap=0.01;cap<=0.1;cap+=0.01){
        float c1=(1/(induct*cap));
        //printf("%f\t ",c1);
        float c2=pow(resistance,2)/(4*pow(cap,2));
        //printf("%f\t",c2);
        float s1=fabs(c1-c2);
        //printf("%f\t",s1);

        freq=(sqrt(s1));
        printf("%f\t",freq);
    }


return 0;
}
