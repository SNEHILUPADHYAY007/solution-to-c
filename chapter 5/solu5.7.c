#include <stdio.h>
int main(){
    int i,j,count=1;
    /*for(i=1;i<15;i++){
        for(j=0;j<i;j++){
            printf("%d\t",count);
            count++;
        }
    printf("\n");
    }*/

    //part2
    for(i=1;i<7;i++){
        for(j=0;j<i;j++){

        if((i+j)%2==0){
            count=0;
            printf("%d\t",count);

        }
        else{
            count=1;
            printf("%d\t",count);

        }

    }


        printf("\n");
    }



return 0;
}
