#include <stdio.h>
int main(){
    int i,j,k,count=0,num;
    char a=' ';
    printf("enter the number till where u want pyramid:");
    scanf("%d",&num);

    for(i=0;i<=num;i++){
            for(int n=num-count;n>=0;n--){
                printf("\t");
            }
        for(j=i;j>=0;j--){
            printf("%d\t",j);
        }
        for(k=j+2;k<=i;k++){
            printf("%d\t",k);
        }
        printf("\n");
        count++;
    }







    /* reverse pyramid
    for(i=4;i>=0;i--){
        for(j=i;j>=0;j--){
            printf("%d\t",j);
            count++;
        }
        for(k=count-i;k<=i;k++){
            printf("%d\t",k);
        }
        count=0;
        printf("\n");
        printf("\t");
        if(i==3){
            printf("\t");
        }
        if(i==2){
            printf("\t\t");
        }
        if(i==1){
            printf("\t\t\t");
        }
        if(i==0){
            printf("\t\t\t\t");
        }
    }

*/
return 0;
}
