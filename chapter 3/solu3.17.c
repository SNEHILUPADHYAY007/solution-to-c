#include <stdio.h>
#include <math.h>
int main(){
    int i;
    printf("x(degrees)\t\tsin(x)\t\tcos(x)");
    for(i=0;i<=180;i+=15){
        float x=i;
        x=x*(3.142/180.0); //converting degree to radians.
        float a=sin(x);
        float b=cos(x);
        printf("\n%d\t\t%f\t\t%f",i,a,b);

    }



return 0;
}
