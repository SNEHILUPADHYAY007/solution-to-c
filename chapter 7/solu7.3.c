#include <stdio.h>
int main(){
    int num[5]={0},total[5],count=0,vote[5],i,spoil=0;
    printf("enter ur vote in 1,2,3,4,5 which represent candidates respectively\n");
    printf("in case u didnt have any choice vote null&void\n");

    for(i=0;i<5;i++){
            printf("enter ur vote for candidate:");
            scanf("%d",&vote[i]);
    }
    for(i=0;i<5;i++){
        num[vote[i]]++;
    }
    for(i=0;i<5;i++){
        total[i]=num[i];
    }


for(int j=1;j<6;j++)
printf("%d\t",total[j]);



return 0;
}
