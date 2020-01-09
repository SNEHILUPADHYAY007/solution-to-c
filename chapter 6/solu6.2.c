#include <stdio.h>
int main(){
    int number,fact;
    printf("enter the number to check its factorial:");
    scanf("%d",&number);
    for(int i=number-1;i>=1;i--){
        number=number*i;
    }
    printf("factorial:%d",number);


return 0;
}
