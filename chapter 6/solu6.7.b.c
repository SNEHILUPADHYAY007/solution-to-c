#include <stdio.h>
int main(){
    int i,j;
    printf("series:\n");
    for(i=1;i<=5;i++){

        for(j=1;j<=5;j++){
            if(i==j||i<j){
                printf("*\t");
            }
            if(i>j){
                printf("\t");
            }

        }
        printf("\n");

    }


}
