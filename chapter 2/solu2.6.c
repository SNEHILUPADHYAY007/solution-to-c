#include <stdio.h>
int main(){
    signed int number;
    int count_neg=0,count_pos=0;
    char ch;
    do{
        printf("\nenter the number:");
        scanf("%d",&number);
        //printf("%c",ch);
        if(number<0){
            count_neg++;
        }
        else if(number>0){
            count_pos++;
        }
        else{
          printf("sorry buddy u entered a 0");
          break;
        }
        printf("\ndo u want to continue then press Y or y:");
        ch=getch();

    }while(ch=='Y'||ch=='y');
printf("\ntotal number of neg are:%d\ntotal number of positives are:%d",count_neg,count_pos);



return 0;
}
