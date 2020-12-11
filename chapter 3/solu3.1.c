#include <stdio.h>
int main()
{
    int x,y,z,temp;


    printf("enter values of x,y,z:");
    scanf("%d %d %d",&x,&y,&z);
    temp=x;
    x=y;
    y=z;
    z=temp;
    printf("x=%d y=%d z=%d",x,y,z);







    return 0;
}
