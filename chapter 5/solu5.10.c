#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    float x1,x2,disc,x;
    printf("enter the values of a,b,c:");
    scanf("%d %d %d",&a,&b,&c);
    disc=(pow(b,2)-(4*a*c));
    float disc1=sqrt(disc);
    if(a==0&&b==0){
        printf("no solutions");
    }
    else if(a==0){
        x=((float)-c/(float)b);
        printf("only one root possible:%f",x);
    }
    else if(disc<0){
        printf("there are no real roots possible");
    }
    else {
        x1=((-b+disc1)/2*a);
        x2=((-b-disc1)/2*a);
        printf("root1=%f,root2=%f",x1,x2);
    }



return 0;
}
