//taken 10 number for making bar graph

#include <stdio.h>
#include <math.h>
int main(){
    int i;
    float number;
    char a=' ',ch;
    do{

        printf("\nenter the number:");
        scanf("%f",&number);
        int numb=round(number);
        printf("%d",numb);
        for(i=1;i<=numb;i++){
            printf("*%c",a);

        }
        printf("\t%f",number);
        printf("\ndo u want to cancel the loop,then press 'N'");
        ch=getch();

}while(ch!='N');

return 0;
}
