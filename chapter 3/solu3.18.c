#include <stdio.h>
#include <math.h>
int main(){
    int i;
    printf("number\t\tsquare\t\tsquare-root");

    for(i=0;i<=100;i+=10){
        printf("\n%d",i);
        int square=1+pow(i,2);
        printf("\t\t%d",square);
        float square_root=sqrt(i);
        printf("\t\t%f",square_root);
    }

return 0;
}
