#include<stdio.h>
int main(){
    float i,a=1, sum=0;
    for(i=1; i<=39; i+=2){
        sum = sum+(i/a);
        a+=a;
    }
    printf("%.2f\n", sum);

    return 0;
}

