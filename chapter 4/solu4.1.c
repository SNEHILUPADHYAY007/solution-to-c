#include <stdio.h>
int main(){
    char ch[20]="WORDPROCESSING";
    char a=' ';
    //printf("%020s",ch);
    printf("%0.4s%c%s",ch,a,ch+4);
    printf("\n");
    printf("------------------");
    printf("\n%0.4s\n%s",ch,ch+4);
    printf("\n");
    printf("------------------");
    printf("\n%0.1s.%0.1s.",ch,ch+4);
    printf("\n");
    printf("------------------");

return 0;
}
