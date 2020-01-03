#include <stdio.h>
#include <math.h>
int main(){
    int time,ini_vel,acc,dist;
    char ch;
    do{
        printf("\nenter time,initial velocity,acceleration,distance:");
        scanf("%d %d %d",&time,&ini_vel,&acc);
        dist=(ini_vel*time)+((acc*pow(time,2))/2);
        printf("\ndistance travelled in meteres:%d",dist);


        printf("\ndo u want to check again:");
        ch=getch();

    }while(ch=='Y'||ch=='y');


return 0;
}
