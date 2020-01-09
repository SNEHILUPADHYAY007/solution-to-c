#include <stdio.h>
int main(){
    int num,count=1;
    printf("series:\n");
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
                printf("%d\t",count);


        }
        count++;

        printf("\n");
    }


}
