//not all entries have been taken,a 5*5 matrix has been created for the same.


#include <stdio.h>
int main(){
    int day,month,i,j,rain[5][5],max,min;
    printf("enter the enties:");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                scanf("%d\t",&rain[i][j]);
        }

    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
                printf("%d\t",rain[i][j]);
        }
        printf("\n");
    }
    max=min=rain[0][0];

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(max<rain[i][j]){
                max=rain[i][j];
            }
            else if(min>rain[i][j]){
                min=rain[i][j];
            }
        }
    }
printf("max is:%d,min is:%d",max,min);




return 0;
}
