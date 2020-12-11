#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float r,p,v;
    for(p=1000,r=0.10,n=1;p<=10000,r<=0.20,n<=10;p+=1000,r+=0.01,n+=1){
            v=p(pow(1+r),n);

    }


return 0;
}
