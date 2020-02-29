#include <stdio.h>
int main(){
    int pascal[10][10]={0},i,j,c=1,d=0;
    for(i=0;i<10;i++)
        pascal[i][0]=c;

            for(i=1;i<10;i++)


                for(j=1;j<10;j++)
                    pascal[i][j]=(pascal[i-1][j-1])+(pascal[i-1][j]);





    for(i=0;i<10;i++){
        for(j=0;j<=i;j++)
            printf("%d\t",pascal[i][j]);


    printf("\n");
}


return 0;
}
