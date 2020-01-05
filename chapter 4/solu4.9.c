#include <stdio.h>
int main(){
 char ch1[6],ch2[10],ch3[6],a=' ';
 printf("enter the name pls:");
 scanf("%5s %5s %5s",ch1,ch2,ch3);
 printf("\n%5s %5s %5s",ch1,ch2,ch3);
 printf("\n%5s %0.1s. %5s",ch1,ch2,ch3);
 printf("\n%0.1s.%0.1s.%5s",ch1,ch2,ch3);
 printf("\n%5s%c%0.1s.%0.1s",ch3,a,ch1,ch2);

}
