#include <stdio.h>
int main(){
    int length,width;
    printf("enter length and width for rectangle:");
    scanf("%d %d",&length,&width);
    int perimeter=2*(length+width);
    int area=length*width;
    printf("perimeter=%d area=%d",perimeter,area);


return 0;
}
