#include <stdio.h>
#include <math.h>
int main(){
    float num=345.6789;
    printf("%-7.2f",floor(num*100)/100);
    printf("\n%7.5f",num);
    printf("\n%-7.0f",num);

return 0;
}
