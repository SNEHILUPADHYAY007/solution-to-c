#include <stdio.h>
int main(){
    int a[5],b[5],c[10],count=0;
    printf("enter elements in ascending order only:");
    printf("\nfor array-1");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("\nfor array-2");
    for(int i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    int min_1,min_2;
    for(int i=0;i<5;i++){
        min_1=a[i];
        min_2=b[i];
        if(min_1<min_2){

                c[count]=min_1;
                count++;
                c[count]=min_2;
                count++;
        }
        else{

                    c[count]=min_2;
                    count++;
                    c[count]=min_1;
                    count++;

        }
    }
for(int i=0;i<10;i++)
printf("c:%d\t",c[i]);


return 0;
}
