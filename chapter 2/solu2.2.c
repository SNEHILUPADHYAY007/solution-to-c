#include <stdio.h>
#include <math.h>
int main(){
    float rupees;
    printf("enter value:");
    scanf("%f",&rupees);
    float rupees_new=round(rupees*100)/100;
    float rupees_new_1=rupees_new*100;
    int paise=rupees_new_1;
    printf("%d",paise);



return 0;
}
