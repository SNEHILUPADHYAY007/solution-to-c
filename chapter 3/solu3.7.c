#include <stdio.h>
#include <math.h>
int main(){
    float number;
    printf("enter the number");
    scanf("%f",&number);
    float numb=round(number*100)/100;
    //printf("%f\t",numb);
    int numb_gr=ceil(numb);
    int numb_lr=floor(numb);
    printf("%d \t %d",numb_gr,numb_lr);

return 0;
}
