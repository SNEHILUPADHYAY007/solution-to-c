#include <stdio.h>
int main(){
    int a,b,c,d,m,n,x1,x2;
    printf("enter the values of a,b,c,d,m,n:");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&m,&n);
    int mul=(a*d)-(c*b);
    if(mul!=0){
        x1=((m*d)-(b*n)/mul);
        x2=((n*a)-(m*c)/mul);
        printf("x1=%d,x2=%d",x1,x2);
    }
    else{
        printf("ad-bc=0");
    }



return 0;
}
