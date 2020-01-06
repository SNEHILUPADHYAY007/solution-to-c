#include <stdio.h>
int main(){
    int maths,phy,chem;
    printf("hello candidate ");
    printf("enter ur marks pls,marks for mathematics,physics,chemistry:");
    scanf("%d %d %d",&maths,&phy,&chem);
    int total=maths+phy+chem;
    int total1=maths+phy;
    if(maths>=60&&phy>=50&&chem>=40){
        if(total>=200||total1>=150){
            printf("congrats ur eligible for a job");
        }
        else{
            printf("sorry candidate ur not eligible");
        }
    }


return 0;
}
