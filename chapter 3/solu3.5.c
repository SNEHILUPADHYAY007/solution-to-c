#include <stdio.h>
int main(){
    int number,i=1000;
    printf("enter 4 digit number:");
    scanf("%d",&number);
    printf("%d",number);
    while(i>1){
            int rem=number%i;
            printf("\n%d",rem);
            i=i/10;

    }
return 0;
}
