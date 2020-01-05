#include <stdio.h>
int main(){
    int x,y;
    float x1,x2,x3;
    printf("enter values of x and y:");
    scanf("%d %d",&x,&y);
    x1=(x+y)/(x-y);
    x2=(x+y)/2;
    x3=(x+y)*(x-y);
    printf("x1=%f,x2=%f,x3=%f",x1,x2,x3);


return 0;
}
