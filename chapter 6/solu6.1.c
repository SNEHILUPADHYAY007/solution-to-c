#include <stdio.h>
int main(){
    int number,rem1=0,rem,jump=1;
    printf("enter the number:");
    scanf("%d",&number);
    int i=sizeof(number);
    printf("%d\n",i);
    for(int j=1;j<=i;j++){
            jump=jump*10;
    }
    while(number>0){
        rem=number%10;
        rem1=rem*jump+rem1;
        number=number/10;
        jump=jump/10;
    }

    printf("%d",rem1);


return 0;
}
