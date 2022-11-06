#include<stdio.h>
int main(){
    float i=1,a=1, sum=0;
    for(i=1; i<=100; i++){
        sum = sum+(1/a);
        a++;
    }
    printf("%.2f\n", sum);

    return 0;
}
