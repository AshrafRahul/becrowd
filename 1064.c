#include<stdio.h>
int main(){
    float n, sum=0;
    int i, count=0;
    for(i=0; i<6; i++){
        scanf("%f", &n);
        if(n>0){
            count++;
            sum = sum+n;
        }
    }

    printf("%d valores positivos\n", count);
    printf("%.1f\n", sum/count);

    return 0;
}

