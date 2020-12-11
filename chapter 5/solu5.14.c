#include <stdio.h>
int main(){
    int num,i,j,count=0;
    //printf("enter the number:");
    //scanf("%d",&num);
    /*for(i=2;i<=num;i++){
            if(num%i==0){
                    if(num==i){
                        count++;
                        break;
                    }
                    else{
                        break;
                    }
            }

    }
    if(count==1){
        printf("prime");
    }
    else{
        printf("not prime");
    }*/


    //part-2

    for(i=100;i<200;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                if(i==j){
                    printf("%d\t",i);
                    count++;
                    break;
                }
                else{
                    break;
                }
            }

        }

    }
printf("\ncount=%d",count);




return 0;
}

