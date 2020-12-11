#include <stdio.h>
#include <math.h>
int main(){
    int year_of_serv,purchase_price,depreciation,salvage;
    printf("enter year,purchase price,depreciation:");
    scanf("%d %d %d",&year_of_serv,&purchase_price,&depreciation);
    salvage=fabs(-(depreciation*year_of_serv)-purchase_price);
    printf("%d",salvage);


return 0;
}
