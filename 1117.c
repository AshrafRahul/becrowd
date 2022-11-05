#include<stdio.h>
int main(){
    float a,avg,count=0,sum=0;
    while(1){
        if(count==2){
            break;
        }
        scanf("%f", &a);
        if(a>=0 && a<=10){
            count++;
            sum+=a;
        }
        else{
            printf("nota invalida\n");
        }
    }
    avg = sum/2.00;
    printf("media = %.2f\n", avg);

    return 0;
}
