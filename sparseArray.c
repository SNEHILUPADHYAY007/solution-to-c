#include <stdio.h>

int main(){
    int r,c,i,j,count=0;
    printf("enter row and columns:");
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0){
                count++;
            }
        }
    }
    int b[3][count],k=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]!=0){
                b[0][k]=i;
                b[1][k]=j;
                b[2][k]=a[i][j];
                k++;
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<count;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }

return 0;
}
