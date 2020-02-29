//worked on 3 set only.

#include <stdio.h>
int main(){
    int i,roll[3],sub_1[3],sub_2[3],sub_3[3],total[3],max_1,max_2,max_3,ro1,ro2,ro3,tot;
    for(i=0;i<3;i++){
        printf("enter roll no:");
        scanf("%d",&roll[i]);
        printf("enter subject %d marks:",i);
        scanf("%d",&sub_1[i]);
        printf("enter subject %d marks:",i+1);
        scanf("%d",&sub_2[i]);
        printf("enter subject %d marks:",i+2);
        scanf("%d",&sub_3[i]);
    }


    for(i=0;i<3;i++){
        total[i]=sub_1[i]+sub_2[i]+sub_3[i];


        //printf("total for roll no:%d is=%d",i,total[i]);


        printf("roll no:%d\tsub-1:%d\tsub-2:%d\tsub-3:%d\t",roll[i],sub_1[i],sub_2[i],sub_3[i]);
        printf("\n");
    }
    max_1=sub_1[0];
    max_2=sub_2[0];
    max_3=sub_3[0];
    tot=total[0];
    for(i=0;i<3;i++){

        if(max_1<sub_1[i+1]){
            ro1=roll[i+1];
            max_1=sub_1[i+1];

        }
        if(max_2<sub_2[i+1]){

            ro2=roll[i+1];
            max_2=sub_2[i+1];
        }
        if(max_3<sub_3[i+1]){
            ro3=roll[i+1];
            max_3=sub_3[i+1];
        }
        if(tot<total[i]){
            tot=total[i];
        }

    }
    printf("max for subject 1:%d,roll no:%d",max_1,ro1);
    printf("\nmax for subject 2:%d,roll no:%d",max_2,ro2);
    printf("\nmax for subject 3:%d,roll no:%d",max_3,ro3);
    printf("the highest total marks is:%d",tot);

return 0;
}
