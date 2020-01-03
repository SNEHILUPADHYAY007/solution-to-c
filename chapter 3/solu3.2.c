//this file includes both 2nd and 3rd question.

#include <stdio.h>
int main()
{
    float x;
    printf("enter ur number:");
    scanf("%f",&x);
    int y=(int)x%10;
    printf("%d",y);

    int z=(int)x%100;
    printf("\t%d",z);
    return 0;
}
