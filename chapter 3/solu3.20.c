#include <stdio.h>
#include <math.h>
int main(){
    int number;
    float square_root;
    char ch;
    printf("enter the number:");
    scanf("%d",&number);
    printf("\npress Y or y for floating point square root else press any other button for integer type square root:");
    ch=getch();
    if(ch=='y'||ch=='Y'){
        square_root=sqrt(number);
        printf("\nsquare root of:%d is:%f",number,square_root);
    }
    else{
        square_root=(int)(sqrt(number));
        printf("\nsquare root of:%d is:%f",number,square_root);
    }


return 0;
}
