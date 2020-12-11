#include <stdio.h>
#include <stdlib.h>
#define UPPER 100
#define LOWER 0
int main(){
    int i,count=0,age[100];
    printf("enter the age:\n");
    for(i=0;i<100;i++){
        age[i]=(rand()%(UPPER-LOWER+1)+LOWER);
        printf("%d\t",age[i]);
    }
    for(i=0;i<100;i++){
        if(age[i]>50&&age[i]<60){
            count++;
        }continue;
    }
printf("\ntotal peoples:%d",count);

return 0;
}
